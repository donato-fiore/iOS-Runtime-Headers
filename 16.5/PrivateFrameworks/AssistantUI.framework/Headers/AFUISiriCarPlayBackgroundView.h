// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUISIRICARPLAYBACKGROUNDVIEW_H
#define AFUISIRICARPLAYBACKGROUNDVIEW_H

@class UIView;
@protocol AFUISiriCarPlayBackgroundViewDelegate;


#import "AFUISiriCarPlayFullScreenBackgroundView.h"

@interface AFUISiriCarPlayBackgroundView : UIView {
    AFUISiriCarPlayFullScreenBackgroundView *_fullScreenBackgroundView;
    UIView *_systemBackgroundView;
    id<AFUISiriCarPlayBackgroundViewDelegate> *_delegate;
}


@property (nonatomic) NSInteger backgroundViewMode; // ivar: _backgroundViewMode
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)initWithDelegate:(id)arg0 ;
-(void)_animateBackgroundsWithVisibility:(BOOL)arg0 backgroundViewMode:(NSInteger)arg1 ;
-(void)_updateCarPlayStatusBarForVisibility:(BOOL)arg0 backgroundViewMode:(NSInteger)arg1 ;
-(void)_updateViewsForVisibility:(BOOL)arg0 backgroundViewMode:(NSInteger)arg1 ;


@end


#endif