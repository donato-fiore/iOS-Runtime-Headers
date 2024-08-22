// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXQUOTECOMPONENTCLASSIFICATION_H
#define SXQUOTECOMPONENTCLASSIFICATION_H



#import "SXDefaultTextComponentClassification.h"

@interface SXQuoteComponentClassification : SXDefaultTextComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(id)accessibilityContextualLabel;
-(id)layoutRules;


@end


#endif