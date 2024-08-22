// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWREMOTEIRISWALLPAPERPLAYER_H
#define SBWREMOTEIRISWALLPAPERPLAYER_H

@class UILongPressGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, SBFIrisWallpaperPlaying, SBWRemoteIrisWallpaperPlayerDelegate, SBFIrisWallpaperPlayerDelegate;

#import <Foundation/Foundation.h>


@interface SBWRemoteIrisWallpaperPlayer : NSObject <UIGestureRecognizerDelegate, SBFIrisWallpaperPlaying>

 {
    UILongPressGestureRecognizer *_gestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBWRemoteIrisWallpaperPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBFIrisWallpaperPlayerDelegate> *irisDelegate; // ivar: _irisDelegate
@property (nonatomic, setter=_setIrisPlaybackState:) NSInteger irisPlaybackState; // ivar: _irisPlaybackState
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTouchActive, setter=_setTouchActive:) BOOL touchActive; // ivar: _touchActive


-(id)init;
-(id)irisGestureRecognizer;
-(void)_handleWallpaperGestureBegan;
-(void)_handleWallpaperGestureChanged;
-(void)_handleWallpaperGestureEnded;
-(void)_wallpaperGestureChanged:(id)arg0 ;


@end


#endif