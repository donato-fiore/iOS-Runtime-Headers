// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUTIMECONTROLS_H
#define MRUTIMECONTROLS_H

@class NSString;
@protocol MPCPlayerSeekCommand;

#import <Foundation/Foundation.h>


@interface MRUTimeControls : NSObject

@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) ? durationSnapshot; // ivar: _durationSnapshot
@property (nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isLive; // ivar: _isLive
@property (readonly, copy, nonatomic) NSString *liveText; // ivar: _liveText
@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) BOOL scrubbable; // ivar: _scrubbable
@property (retain, nonatomic) NSObject<MPCPlayerSeekCommand> *seekCommand; // ivar: _seekCommand
@property (readonly, nonatomic) CGFloat startTime;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)elapsedTimeForDate:(id)arg0 ;
-(id)description;
-(id)initWithResponseItem:(id)arg0 ;


@end


#endif