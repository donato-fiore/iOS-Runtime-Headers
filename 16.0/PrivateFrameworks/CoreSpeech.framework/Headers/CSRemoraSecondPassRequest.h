// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMORASECONDPASSREQUEST_H
#define CSREMORASECONDPASSREQUEST_H

@class CSAsset, NSString;

#import <Foundation/Foundation.h>

#import "CSAudioProvider.h"
#import "CSAudioStreamHolding.h"
#import "CSVoiceTriggerSecondChanceContext.h"
#import "CSVoiceTriggerSecondPass.h"

@interface CSRemoraSecondPassRequest : NSObject

@property (retain, nonatomic) CSAudioProvider *audioProvider; // ivar: _audioProvider
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding; // ivar: _audioStreamHolding
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (retain, nonatomic) NSString *firstPassDeviceID; // ivar: _firstPassDeviceID
@property (nonatomic) CGFloat firstPassTriggerEndTime; // ivar: _firstPassTriggerEndTime
@property (nonatomic) float goodnessScore; // ivar: _goodnessScore
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) BOOL isSecondPassRunning; // ivar: _isSecondPassRunning
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext; // ivar: _secondChanceContext
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // ivar: _voiceTriggerSecondPass


-(id)_secondPassStateQueue;
-(id)_secondPassWorkQueue;
-(id)initWithDeviceID:(id)arg0 ;
-(void)cancelAudioStreamHold;
-(void)cancelRequest;
-(void)dealloc;
-(void)holdAudioStreamWithTimeout:(CGFloat)arg0 ;
-(void)reset;
-(void)setAsset:(id)arg0 ;
-(void)start;


@end


#endif