// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSTATUSBARHOMEBUTTON_H
#define DBSTATUSBARHOMEBUTTON_H

@class UIImage, UIImageView;


#import "DBStatusBarButton.h"

@interface DBStatusBarHomeButton : DBStatusBarButton

@property (retain, nonatomic) UIImage *dashboardImage; // ivar: _dashboardImage
@property (nonatomic) NSUInteger displayState; // ivar: _displayState
@property (retain, nonatomic) UIImageView *focusRingImageView; // ivar: _focusRingImageView
@property (retain, nonatomic) UIImage *iconsImage; // ivar: _iconsImage


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installSelectGestureRecognizer;
-(void)_setupImagesIfNecessary;
-(void)_updateDisplayState:(BOOL)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setFocusHighlightColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif