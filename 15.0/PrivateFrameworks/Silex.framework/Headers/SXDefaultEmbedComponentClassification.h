// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDEFAULTEMBEDCOMPONENTCLASSIFICATION_H
#define SXDEFAULTEMBEDCOMPONENTCLASSIFICATION_H



#import "SXComponentClassification.h"

@interface SXDefaultEmbedComponentClassification : SXComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(Class)componentModelClass;
-(id)layoutRules;


@end


#endif