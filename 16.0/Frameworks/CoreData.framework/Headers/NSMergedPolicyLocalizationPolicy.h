// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMERGEDPOLICYLOCALIZATIONPOLICY_H
#define NSMERGEDPOLICYLOCALIZATIONPOLICY_H

@class NSSet;


#import "NSValidationErrorLocalizationPolicy.h"

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet *_mergedPolicies;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(void)addPolicy:(id)arg0 ;
-(void)dealloc;


@end


#endif