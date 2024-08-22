// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXBODYCOMPONENTCLASSIFICATION_H
#define SXBODYCOMPONENTCLASSIFICATION_H



#import "SXDefaultTextComponentClassification.h"

@interface SXBodyComponentClassification : SXDefaultTextComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)accessibilitySkippedDuringReadAll;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(id)layoutRules;
-(id)textRules;


@end


#endif