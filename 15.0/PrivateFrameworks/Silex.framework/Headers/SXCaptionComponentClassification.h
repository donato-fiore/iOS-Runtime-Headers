// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCAPTIONCOMPONENTCLASSIFICATION_H
#define SXCAPTIONCOMPONENTCLASSIFICATION_H



#import "SXDefaultTextComponentClassification.h"

@interface SXCaptionComponentClassification : SXDefaultTextComponentClassification



+(id)roleString;
+(id)typeString;
+(int)role;
-(BOOL)hasAffiliationWithClassification:(id)arg0 forDirection:(NSInteger)arg1 ;
-(id)accessibilityContextualLabel;
-(id)textRules;


@end


#endif