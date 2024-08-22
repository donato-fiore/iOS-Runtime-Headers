// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBLOCKWORKSPACEQUEUETESTRECIPE_H
#define SBBLOCKWORKSPACEQUEUETESTRECIPE_H

@class NSTimer, NSString, FBWorkspaceEventQueueLock;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe>



@property (retain, nonatomic) NSTimer *blockTimer; // ivar: _blockTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FBWorkspaceEventQueueLock *queueLock; // ivar: _queueLock
@property (readonly) Class superclass;


+(void)load;
-(id)title;
-(void)blockTimerDidFire:(id)arg0 ;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif