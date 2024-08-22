// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPOSTPLAYUPSELLMANAGER_H
#define VUIPOSTPLAYUPSELLMANAGER_H

@protocol TVPMediaItem;

#import <Foundation/Foundation.h>


@interface VUIPostPlayUpsellManager : NSObject

@property (nonatomic) CGFloat deferredElapsedTime; // ivar: _deferredElapsedTime
@property (retain, nonatomic) NSObject<TVPMediaItem> *deferredMediaItem; // ivar: _deferredMediaItem


+(id)sharedInstance;
-(BOOL)_isFullScreenPlaybackUIShown;
-(id)init;
-(void)_currentMediaItemWillChange:(id)arg0 ;
-(void)_handleDeferredMediaItemUpsellIfNeeded;
-(void)_handleUpsellForMediaItem:(id)arg0 elapsedTimeInterval:(CGFloat)arg1 ;
-(void)_reset;
-(void)handleRouterDataSourceIfNeeded:(id)arg0 ;


@end


#endif