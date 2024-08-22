// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLETTSREQUESTFEATUREFLAGS_H
#define QSSMUTABLETTSREQUESTFEATUREFLAGS_H



#import "QSSTTSRequestFeatureFlags.h"

@interface QSSMutableTTSRequestFeatureFlags : QSSTTSRequestFeatureFlags

@property (nonatomic) BOOL cache_only;
@property (nonatomic) BOOL disable_prompts;
@property (nonatomic) BOOL fe_feature;
@property (nonatomic) BOOL fe_feature_only;
@property (nonatomic) NSInteger phoneset_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif