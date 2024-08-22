// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXHEADERCOMPONENTCLASSIFICATION_H
#define SXHEADERCOMPONENTCLASSIFICATION_H



#import "SXDefaultContainerComponentClassification.h"

@interface SXHeaderComponentClassification : SXDefaultContainerComponentClassification



+(id)roleString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(id)layoutRules;


@end


#endif