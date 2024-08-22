// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIREMOTEIRISWALLPAPERPLAYER_H
#define PBUIREMOTEIRISWALLPAPERPLAYER_H

@class UILongPressGestureRecognizer, NSString, UIGestureRecognizer, NSURL;
@protocol UIGestureRecognizerDelegate, PBUIIrisWallpaperPlaying, PBUIRemoteIrisWallpaperPlayerDelegate, PBUIIrisWallpaperPlayerDelegate;

#import <Foundation/Foundation.h>


@interface PBUIRemoteIrisWallpaperPlayer : NSObject <UIGestureRecognizerDelegate, PBUIIrisWallpaperPlaying>

 {
    UILongPressGestureRecognizer *_gestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBUIRemoteIrisWallpaperPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PBUIIrisWallpaperPlayerDelegate> *irisDelegate; // ivar: _irisDelegate
@property (readonly, nonatomic) UIGestureRecognizer *irisGestureRecognizer;
@property (nonatomic, setter=_setIrisPlaybackState:) NSInteger irisPlaybackState; // ivar: _irisPlaybackState
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) CGFloat stillTimeInVideo;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTouchActive, setter=_setTouchActive:) BOOL touchActive; // ivar: _touchActive
@property (readonly, copy, nonatomic) NSURL *videoFileURL;


-(id)init;
-(void)_handleWallpaperGestureBegan;
-(void)_handleWallpaperGestureChanged;
-(void)_handleWallpaperGestureEnded;
-(void)_wallpaperGestureChanged:(id)arg0 ;


@end


#endif