// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONFERENCECALLSTATE_H
#define AVCONFERENCECALLSTATE_H


#import <Foundation/Foundation.h>

#import "VCCapabilities.h"

@interface AVConferenceCallState : NSObject

@property (nonatomic, getter=isAudioPaused) BOOL audioIsPaused; // ivar: _audioIsPaused
@property (retain, nonatomic) VCCapabilities *capabilities; // ivar: _capabilities
@property (nonatomic, getter=isAudioSending) BOOL isAudioSending; // ivar: _isAudioSending
@property (nonatomic, getter=isVideoPaused) BOOL isVideoPaused; // ivar: _isVideoPaused


-(void)dealloc;


@end


#endif