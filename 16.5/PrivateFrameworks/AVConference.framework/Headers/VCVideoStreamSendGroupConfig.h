// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOSTREAMSENDGROUPCONFIG_H
#define VCVIDEOSTREAMSENDGROUPCONFIG_H



#import "VCMediaStreamSendGroupConfig.h"
#import "VCSessionUplinkVideoStreamController.h"

@interface VCVideoStreamSendGroupConfig : VCMediaStreamSendGroupConfig {
    int _captureSource;
}


@property (retain, nonatomic) VCSessionUplinkVideoStreamController *uplinkVideoStreamController; // ivar: _uplinkVideoStreamController


-(int)captureSource;
-(void)dealloc;
-(void)setCaptureSource:(int)arg0 ;


@end


#endif