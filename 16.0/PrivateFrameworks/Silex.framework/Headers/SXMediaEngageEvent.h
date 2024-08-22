// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXMEDIAENGAGEEVENT_H
#define SXMEDIAENGAGEEVENT_H

@class NSError, NSString;


#import "SXMediaEvent.h"

@interface SXMediaEngageEvent : SXMediaEvent

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) CGFloat mediaDuration; // ivar: _mediaDuration
@property (nonatomic) CGFloat mediaFrameRate; // ivar: _mediaFrameRate
@property (retain, nonatomic) NSString *mediaPauseMethod; // ivar: _mediaPauseMethod
@property (nonatomic) NSUInteger mediaPausePosition; // ivar: _mediaPausePosition
@property (nonatomic) NSUInteger mediaPlayMethod; // ivar: _mediaPlayMethod
@property (retain, nonatomic) NSString *mediaResumeMethod; // ivar: _mediaResumeMethod
@property (nonatomic) NSUInteger mediaResumePosition; // ivar: _mediaResumePosition
@property (nonatomic) CGFloat mediaTimePlayed; // ivar: _mediaTimePlayed
@property (nonatomic) BOOL muted; // ivar: _muted
@property (nonatomic) NSUInteger userAction; // ivar: _userAction
@property (nonatomic) CGFloat volume; // ivar: _volume




@end


#endif