// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETTSREQUESTFEATUREFLAGS_H
#define FTMUTABLETTSREQUESTFEATUREFLAGS_H



#import "FTTTSRequestFeatureFlags.h"

@interface FTMutableTTSRequestFeatureFlags : FTTTSRequestFeatureFlags

@property (nonatomic) BOOL cache_only;
@property (nonatomic) BOOL disable_prompts;
@property (nonatomic) BOOL fe_feature;
@property (nonatomic) BOOL fe_feature_only;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif