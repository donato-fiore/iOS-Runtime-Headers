// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSYSTEMAUDIOCAPTURECONTROLLER_H
#define VCSYSTEMAUDIOCAPTURECONTROLLER_H

@class NSString;
@protocol VCAudioIOControllerControl, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCSystemAudioCapture.h"

@interface VCSystemAudioCaptureController : NSObject <VCAudioIOControllerControl>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    VCSystemAudioCapture *_systemAudioCapture;
    BOOL _running;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)startClient:(id)arg0 ;
-(void)stopClient:(id)arg0 ;
-(void)updateClient:(id)arg0 direction:(unsigned char)arg1 ;


@end


#endif