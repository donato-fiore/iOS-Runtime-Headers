// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMOBILEPLAYBACKRATEMENUCONTROLLER_H
#define AVMOBILEPLAYBACKRATEMENUCONTROLLER_H

@class UIMenu, NSArray;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVPlaybackRateCollection.h"
#import "AVPlaybackRate.h"

@interface AVMobilePlaybackRateMenuController : NSObject {
    AVObservationController *_observationController;
    UIMenu *_playbackRateMenu;
    NSArray *_activeMenuItems;
    AVPlaybackRateCollection *_activePlaybackRateCollection;
    AVPlaybackRate *_activeSelectedPlaybackRate;
    BOOL _activeMenuHasImage;
}


@property (readonly, nonatomic) UIMenu *menu;
@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection; // ivar: _playbackRateCollection


+(void)_loadPlaybackSpeedControlImageWithCompletionHandler:(id)arg0 ;
-(id)init;
-(void)_reconstructPlaybackRateMenuItems;
-(void)_updatePlaybackRateMenuIfNeeded;
-(void)_updatePlaybackRateMenuItemStatesIfNeeded;
-(void)dealloc;


@end


#endif