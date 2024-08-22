// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIASSISTANTBARSEPARATORVIEW_H
#define UIASSISTANTBARSEPARATORVIEW_H



#import "UIView.h"

@interface UIAssistantBarSeparatorView : UIView

@property (retain, nonatomic) UIView *innerSeparatorView; // ivar: _innerSeparatorView


+(CGFloat)preferredWidth;
-(BOOL)_usesLightStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateVisualStyle;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif