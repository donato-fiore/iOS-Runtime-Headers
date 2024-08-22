// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINOTIFICATIONPROCESSINGPOLICY_H
#define TRINOTIFICATIONPROCESSINGPOLICY_H



#import "TRIPBMessage.h"

@interface TRINotificationProcessingPolicy : TRIPBMessage

@property (nonatomic) int assetDownloadPolicy;
@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) BOOL hasAssetDownloadPolicy;
@property (nonatomic) BOOL hasDelaySeconds;


+(id)descriptor;


@end


#endif