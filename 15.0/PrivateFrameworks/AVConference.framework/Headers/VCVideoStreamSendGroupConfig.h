// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEOSTREAMSENDGROUPCONFIG_H
#define VCVIDEOSTREAMSENDGROUPCONFIG_H



#import "VCMediaStreamSendGroupConfig.h"
#import "VCMoments.h"

@interface VCVideoStreamSendGroupConfig : VCMediaStreamSendGroupConfig {
    int _captureSource;
}


@property (retain, nonatomic) VCMoments *moments; // ivar: _moments


-(int)captureSource;
-(void)dealloc;
-(void)setCaptureSource:(int)arg0 ;


@end


#endif