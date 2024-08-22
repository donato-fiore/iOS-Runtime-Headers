// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUINOWPLAYINGTIMERFEATUREINFO_H
#define VUINOWPLAYINGTIMERFEATUREINFO_H

@class NSDate, NSTimer;

#import <Foundation/Foundation.h>


@interface VUINowPlayingTimerFeatureInfo : NSObject

@property (retain, nonatomic) NSDate *backgroundedDate; // ivar: _backgroundedDate
@property (weak, nonatomic) NSTimer *oneTimeTimer; // ivar: _oneTimeTimer
@property (weak, nonatomic) NSTimer *repeatingTimer; // ivar: _repeatingTimer
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate




@end


#endif