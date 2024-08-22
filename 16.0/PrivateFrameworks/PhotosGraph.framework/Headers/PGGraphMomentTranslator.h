// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHMOMENTTRANSLATOR_H
#define PGGRAPHMOMENTTRANSLATOR_H



#import "PGGraphEntityTranslator.h"

@interface PGGraphMomentTranslator : PGGraphEntityTranslator



+(id)entityClassName;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg0 change:(id)arg1 progressBlock:(id)arg2 ;
-(id)graphChangesForDeletedLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(id)graphChangesForInsertedLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(id)highlightUpdateTypeByMomentProperty;
-(id)momentUpdateTypeByMomentProperty;


@end


#endif