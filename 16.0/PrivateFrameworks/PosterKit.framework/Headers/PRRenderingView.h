// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRRENDERINGVIEW_H
#define PRRENDERINGVIEW_H

@class UIView;
@protocol PRRenderingViewOwner;


#import "PRPosterWindow.h"

@interface PRRenderingView : UIView {
    id<PRRenderingViewOwner> *_owner;
    PRPosterWindow *_window;
    UIView *_invertedBackgroundCutoutView;
}


@property (nonatomic, getter=isAlphaInverted) BOOL alphaInverted; // ivar: _alphaInverted
@property (nonatomic) NSInteger level; // ivar: _level
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor


-(BOOL)isEmpty;
-(id)initWithOwner:(id)arg0 scene:(id)arg1 level:(NSInteger)arg2 userInteractionEnabled:(BOOL)arg3 ;
-(void)invalidate;


@end


#endif