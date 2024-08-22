// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDEPENDENTRELEVANCEPROVIDER_H
#define REDEPENDENTRELEVANCEPROVIDER_H



#import "REConditionalRelevanceProvider.h"

@interface REDependentRelevanceProvider : REConditionalRelevanceProvider



+(id)_dependentConditionWithRelevanceProvider:(id)arg0 invertsRelevance:(BOOL)arg1 ;
+(id)dependentProviderWithProvider:(id)arg0 ;
+(id)dependentProviderWithProvider:(id)arg0 invertsRelevance:(BOOL)arg1 ;


@end


#endif