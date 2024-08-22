// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIHINTSVOLUMEBUTTONSVIEW_H
#define TVRUIHINTSVOLUMEBUTTONSVIEW_H

@class UIView;
@protocol TVRUIHintsStyleProvider;


#import "TVRUIHintsGlyphView.h"

@interface TVRUIHintsVolumeButtonsView : UIView

@property (retain, nonatomic) UIView *bottomButtonOutline; // ivar: _bottomButtonOutline
@property (nonatomic) CGFloat buttonHeight; // ivar: _buttonHeight
@property (retain, nonatomic) TVRUIHintsGlyphView *glyphView; // ivar: _glyphView
@property (nonatomic) NSUInteger presentation; // ivar: _presentation
@property (retain, nonatomic) NSObject<TVRUIHintsStyleProvider> *styleProvider; // ivar: _styleProvider
@property (retain, nonatomic) UIView *topButtonOutline; // ivar: _topButtonOutline


-(id)initWithPresentation:(NSUInteger)arg0 styleProvider:(id)arg1 buttonEdge:(unsigned int)arg2 buttonHeight:(CGFloat)arg3 ;
-(void)_setupConstraintsForButtonEdge:(unsigned int)arg0 ;
-(void)_setupConstraintsForLeftAndRightSideButtons;


@end


#endif