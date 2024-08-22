// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARDAEMONREPLAYBLOCKDELEGATE_H
#define ARDAEMONREPLAYBLOCKDELEGATE_H

@class NSString;
@protocol ARDaemonReplayDelegate;

#import <Foundation/Foundation.h>


@interface ARDaemonReplayBlockDelegate : NSObject <ARDaemonReplayDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *replayFailedBlock; // ivar: _replayFailedBlock
@property (copy, nonatomic) id *replayStartedBlock; // ivar: _replayStartedBlock
@property (copy, nonatomic) id *replayStoppedBlock; // ivar: _replayStoppedBlock
@property (copy, nonatomic) id *replayUpdatedBlock; // ivar: _replayUpdatedBlock
@property (readonly) Class superclass;


-(void)replayDidFailWithError:(id)arg0 ;
-(void)replayDidStartWithReplayTime:(CGFloat)arg0 ;
-(void)replayDidStop;
-(void)replayDidUpdateResource:(id)arg0 withKey:(id)arg1 atTime:(CGFloat)arg2 ;


@end


#endif