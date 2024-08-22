// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMOMENTSCOLLECTOR_H
#define VCMOMENTSCOLLECTOR_H

@class NSString;
@protocol VCMomentsCollectorDelegate;

#import <Foundation/Foundation.h>

#import "VCMoments.h"

@interface VCMomentsCollector : NSObject <VCMomentsCollectorDelegate>

 {
    NSInteger _streamToken;
    VCMoments *_moments;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStreamToken:(NSInteger)arg0 ;
-(void)cleanupActiveRequests;
-(void)dealloc;
-(void)stream:(id)arg0 addAudioSampleBuffer:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2 ;
-(void)stream:(id)arg0 addVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3 ;


@end


#endif