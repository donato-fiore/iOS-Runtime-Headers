// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTEXTUALNOTIFICATION_H
#define PXCONTEXTUALNOTIFICATION_H

@class UIImage, AVAsset, AVVideoComposition, NSString, UIView, NSValue, UIWindow;
@protocol PXContextualNotificationDelegate;

#import <Foundation/Foundation.h>

#import "PXContextualNotificationCenter.h"
#import "PXImageRequester.h"
#import "PXContextualNotificationView.h"

@interface PXContextualNotification : NSObject {
    ? _delegateRespondsTo;
}


@property (nonatomic) NSInteger animationCount; // ivar: _animationCount
@property (nonatomic) NSInteger appearanceState; // ivar: _appearanceState
@property (nonatomic) PXContextualNotificationVisualState appliedState; // ivar: _appliedState
@property (weak, nonatomic) PXContextualNotificationCenter *contextualNotificationCenter; // ivar: _contextualNotificationCenter
@property (weak, nonatomic) NSObject<PXContextualNotificationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (copy, nonatomic) AVAsset *loopingVideoAsset; // ivar: _loopingVideoAsset
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition; // ivar: _loopingVideoComposition
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) PXContextualNotificationVisualState nextState; // ivar: _nextState
@property (nonatomic) CGFloat panInitialVerticalOffset; // ivar: _panInitialVerticalOffset
@property (readonly, nonatomic) NSInteger preferredAnimation;
@property (readonly, nonatomic) UIView *preferredContainerView;
@property (retain, nonatomic) NSValue *releaseVelocity; // ivar: _releaseVelocity
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIImage *titleIcon; // ivar: _titleIcon
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo
@property (retain, nonatomic) PXContextualNotificationView *view; // ivar: _view
@property (weak, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)shouldPassthroughPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)init;
-(struct CGRect )containingFrameInContainerView:(id)arg0 ;
-(void)_invalidate;
-(void)dismiss;
-(void)handleDiscard;
-(void)handleTap:(id)arg0 ;
-(void)invalidateLayout;
-(void)present;


@end


#endif