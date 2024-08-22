// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPERSONTRANSLATOR_H
#define PGGRAPHPERSONTRANSLATOR_H



#import "PGGraphEntityTranslator.h"

@interface PGGraphPersonTranslator : PGGraphEntityTranslator



+(id)entityClassName;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg0 change:(id)arg1 progressBlock:(id)arg2 ;
-(id)graphChangesForDeletedLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(id)stateUpdateProperties;
-(id)verifiedTypeProperties;


@end


#endif