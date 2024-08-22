// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIDEOPLAYERVIEWCONTROLLERMANAGER_H
#define SXVIDEOPLAYERVIEWCONTROLLERMANAGER_H

@class NSURL, NSString, NSMutableDictionary;
@protocol SXVideoPlayerViewControllerProvider;

#import <Foundation/Foundation.h>


@interface SXVideoPlayerViewControllerManager : NSObject <SXVideoPlayerViewControllerProvider>



@property (copy, nonatomic) NSURL *autoplayURL; // ivar: _autoplayURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *loseOwnershipBlocks; // ivar: _loseOwnershipBlocks
@property (readonly, nonatomic) NSMutableDictionary *pendingLoseOwnershipBlocks; // ivar: _pendingLoseOwnershipBlocks
@property (readonly, nonatomic) NSMutableDictionary *pendingReceiveOwnershipBlocks; // ivar: _pendingReceiveOwnershipBlocks
@property (readonly, nonatomic) NSMutableDictionary *pendingVideoPlayerViewControllers; // ivar: _pendingVideoPlayerViewControllers
@property (nonatomic) BOOL presentedAndAppeared; // ivar: _presentedAndAppeared
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *videoAnalyticsRouters; // ivar: _videoAnalyticsRouters
@property (readonly, nonatomic) NSMutableDictionary *videoPlayerViewControllers; // ivar: _videoPlayerViewControllers
@property (readonly, nonatomic) NSMutableDictionary *visibilityMonitors; // ivar: _visibilityMonitors


-(id)init;
-(id)videoPlayerViewControllerForURL:(id)arg0 receiveOwnershipBlock:(id)arg1 ;
-(void)configureAutoplayForVideoWithURL:(id)arg0 analyticsRouter:(id)arg1 ;
-(void)registerExistingVideoPlayerViewController:(id)arg0 URL:(id)arg1 analyticsRouter:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 loseOwnershipBlock:(id)arg4 ;


@end


#endif