// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSYSTEMAUDIOCAPTURECONTROLLER_H
#define VCSYSTEMAUDIOCAPTURECONTROLLER_H

@class NSString, NSDictionary;
@protocol VCAudioIOControllerControl, OS_dispatch_queue;


#import "VCObject.h"

@interface VCSystemAudioCaptureController : VCObject <VCAudioIOControllerControl>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _running;
    tagVCSystemAudioCaptureControllerConfig _configuration;
    BOOL _useScreenCaptureKitForAudio;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) Class superclass;


+(BOOL)isValidConfiguration:(struct tagVCSystemAudioCaptureControllerConfig *)arg0 ;
+(id)captureServerConfigForAudioConfig:(struct tagVCSystemAudioCaptureControllerConfig *)arg0 forClient:(id)arg1 ;
+(int)captureSourceForSystemAudioCaptureControllerConfig:(struct tagVCSystemAudioCaptureControllerConfig *)arg0 ;
+(int)captureSourceForTypePreSpatialSessionType:(unsigned int)arg0 ;
+(int)captureSourceForTypeProcessID:(int)arg0 ;
-(id)dispatchQueueNameWithConfig:(struct tagVCSystemAudioCaptureControllerConfig *)arg0 ;
-(id)init;
-(id)initWithConfig:(struct tagVCSystemAudioCaptureControllerConfig *)arg0 ;
-(void)dealloc;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)setupLogPrefixWithConfig:(struct tagVCSystemAudioCaptureControllerConfig *)arg0 ;
-(void)startClient:(id)arg0 ;
-(void)stopClient:(id)arg0 ;
-(void)updateClient:(id)arg0 direction:(unsigned char)arg1 ;


@end


#endif