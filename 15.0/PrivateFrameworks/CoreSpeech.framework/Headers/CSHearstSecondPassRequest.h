// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSHEARSTSECONDPASSREQUEST_H
#define CSHEARSTSECONDPASSREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CSAudioProvider.h"
#import "CSAudioStreamHolding.h"
#import "CSVoiceTriggerSecondPass.h"

@interface CSHearstSecondPassRequest : NSObject

@property (retain, nonatomic) CSAudioProvider *audioProvider; // ivar: _audioProvider
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding; // ivar: _audioStreamHolding
@property (retain, nonatomic) NSString *firstPassDeviceID; // ivar: _firstPassDeviceID
@property (nonatomic) BOOL isSecondPassRunning; // ivar: _isSecondPassRunning
@property (nonatomic) float remoteMicVADScore; // ivar: _remoteMicVADScore
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // ivar: _voiceTriggerSecondPass


-(id)initWithDeviceID:(id)arg0 ;
-(void)cancelAudioStreamHold;
-(void)dealloc;
-(void)holdAudioStreamWithTimeout:(CGFloat)arg0 ;
-(void)reset;
-(void)setAsset:(id)arg0 ;
-(void)start;


@end


#endif