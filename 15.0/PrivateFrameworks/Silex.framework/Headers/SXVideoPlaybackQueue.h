// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOPLAYBACKQUEUE_H
#define SXVIDEOPLAYBACKQUEUE_H

@class NSString, NSMutableArray;
@protocol SXVideoPlaybackObserver;

#import <Foundation/Foundation.h>


@interface SXVideoPlaybackQueue : NSObject <SXVideoPlaybackObserver>



@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)advance;
-(id)init;
-(void)appendItem:(id)arg0 ;
-(void)insertItem:(id)arg0 afterItem:(id)arg1 ;
-(void)playbackCoordinator:(id)arg0 loadingProgressed:(CGFloat)arg1 ;
-(void)playbackCoordinator:(id)arg0 playbackFailedWithError:(id)arg1 ;
-(void)playbackCoordinator:(id)arg0 timeElapsed:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)prefetchItemAfterCoordinatorIfPossible:(id)arg0 ;
-(void)prependItem:(id)arg0 ;


@end


#endif