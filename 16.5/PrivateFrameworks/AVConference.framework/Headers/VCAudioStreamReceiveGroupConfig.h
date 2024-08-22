// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOSTREAMRECEIVEGROUPCONFIG_H
#define VCAUDIOSTREAMRECEIVEGROUPCONFIG_H

@class NSString;
@protocol VCAudioStreamGroupConfig;


#import "VCMediaStreamGroupConfig.h"
#import "VCAudioStreamGroupCommonConfig.h"
#import "VCAudioCaptionsCoordinator.h"

@interface VCAudioStreamReceiveGroupConfig : VCMediaStreamGroupConfig <VCAudioStreamGroupConfig>



@property (retain) VCAudioStreamGroupCommonConfig *audioStreamGroupConfig; // ivar: _audioStreamGroupConfig
@property (retain, nonatomic) VCAudioCaptionsCoordinator *captionsCoordinator; // ivar: _captionsCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif