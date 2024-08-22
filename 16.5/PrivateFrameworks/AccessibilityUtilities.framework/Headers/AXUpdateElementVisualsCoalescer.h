// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUPDATEELEMENTVISUALSCOALESCER_H
#define AXUPDATEELEMENTVISUALSCOALESCER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface AXUpdateElementVisualsCoalescer : NSObject

@property (nonatomic) CGFloat lastProgressTime; // ivar: _lastProgressTime
@property (nonatomic) CGFloat progressInterval; // ivar: _progressInterval
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (copy, nonatomic) id *updateVisualsSequenceDidBeginHandler; // ivar: _updateVisualsSequenceDidBeginHandler
@property (copy, nonatomic) id *updateVisualsSequenceDidFinishHandler; // ivar: _updateVisualsSequenceDidFinishHandler
@property (copy, nonatomic) id *updateVisualsSequenceInProgressHandler; // ivar: _updateVisualsSequenceInProgressHandler


-(id)init;
-(void)_timerDidFire:(id)arg0 ;
-(void)dealloc;
-(void)notifyUpdateElementVisualsEventDidOccur;


@end


#endif