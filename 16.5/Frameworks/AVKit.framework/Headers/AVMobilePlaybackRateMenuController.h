// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILEPLAYBACKRATEMENUCONTROLLER_H
#define AVMOBILEPLAYBACKRATEMENUCONTROLLER_H

@class UIMenu, NSArray;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVPlaybackSpeedCollection.h"
#import "AVPlaybackSpeed.h"

@interface AVMobilePlaybackRateMenuController : NSObject {
    AVObservationController *_observationController;
    UIMenu *_playbackRateMenu;
    NSArray *_activeMenuItems;
    AVPlaybackSpeedCollection *_activePlaybackRateCollection;
    AVPlaybackSpeed *_activeSelectedPlaybackSpeed;
    BOOL _activeMenuHasImage;
}


@property (readonly, nonatomic) UIMenu *menu;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection; // ivar: _playbackSpeedCollection


+(void)_loadPlaybackSpeedControlImageWithCompletionHandler:(id)arg0 ;
-(id)init;
-(void)_reconstructPlaybackRateMenuItems;
-(void)_updatePlaybackRateMenuIfNeeded;
-(void)_updatePlaybackRateMenuItemStatesIfNeeded;
-(void)dealloc;


@end


#endif