// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBARSYSTEMNAVIGATIONITEMVIEW_H
#define UISTATUSBARSYSTEMNAVIGATIONITEMVIEW_H

@class NSString;


#import "UIStatusBarItemView.h"
#import "UIButton.h"

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) int currentLabelCompressionLevel; // ivar: _currentLabelCompressionLevel
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) NSString *title;


-(BOOL)_shouldLayoutImageOnRight;
-(BOOL)layoutImageOnTrailingEdge;
-(CGFloat)addContentOverlap:(CGFloat)arg0 ;
-(CGFloat)extraLeftPadding;
-(CGFloat)extraRightPadding;
-(CGFloat)resetContentOverlap;
-(CGFloat)updateContentsAndWidth;
-(NSInteger)labelLineBreakMode;
-(id)accessibilityHUDRepresentation;
-(id)shortenedTitleWithCompressionLevel:(int)arg0 ;
-(void)userDidActivateButton:(id)arg0 ;


@end


#endif