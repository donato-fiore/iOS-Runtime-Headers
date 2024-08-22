// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPPLAYBACKREPORTINGEVENT_H
#define TVPPLAYBACKREPORTINGEVENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TVPPlaybackReportingEvent.h"

@interface TVPPlaybackReportingEvent : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSInteger durationMS; // ivar: _durationMS
@property (nonatomic) BOOL isUIInteraction; // ivar: _isUIInteraction
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) TVPPlaybackReportingEvent *startEvent; // ivar: _startEvent
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) id *value; // ivar: _value


-(id)description;


@end


#endif