// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXPULLQUOTECOMPONENTCLASSIFICATION_H
#define SXPULLQUOTECOMPONENTCLASSIFICATION_H



#import "SXDefaultTextComponentClassification.h"

@interface SXPullQuoteComponentClassification : SXDefaultTextComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(id)accessibilityContextualLabel;
-(id)accessibilityCustomRotorMembership;
-(id)layoutRules;
-(id)textRules;


@end


#endif