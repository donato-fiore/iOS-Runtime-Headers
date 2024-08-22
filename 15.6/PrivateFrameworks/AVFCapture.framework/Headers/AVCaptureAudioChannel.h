// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREAUDIOCHANNEL_H
#define AVCAPTUREAUDIOCHANNEL_H


#import <Foundation/Foundation.h>

#import "AVCaptureAudioChannelInternal.h"

@interface AVCaptureAudioChannel : NSObject {
    AVCaptureAudioChannelInternal *_internal;
}


@property (readonly, nonatomic) float averagePowerLevel;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) float peakHoldLevel;
@property (nonatomic) float volume; // ivar: _volume


+(void)initialize;
-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif