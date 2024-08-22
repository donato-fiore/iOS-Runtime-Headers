// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHIGHLIGHTTRANSLATOR_H
#define PGGRAPHHIGHLIGHTTRANSLATOR_H



#import "PGGraphEntityTranslator.h"

@interface PGGraphHighlightTranslator : PGGraphEntityTranslator



+(BOOL)includesRelationshipChanges;
+(id)entityClassName;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg0 change:(id)arg1 progressBlock:(id)arg2 ;
-(id)graphChangesForDeletedLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(id)graphChangesForInsertedLocalIdentifiers:(id)arg0 progressBlock:(id)arg1 ;
-(id)highlightUpdateDateProperties;
-(id)highlightUpdateTypeProperties;


@end


#endif