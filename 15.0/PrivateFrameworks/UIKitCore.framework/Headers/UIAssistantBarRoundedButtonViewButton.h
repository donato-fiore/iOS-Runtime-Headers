// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIASSISTANTBARROUNDEDBUTTONVIEWBUTTON_H
#define UIASSISTANTBARROUNDEDBUTTONVIEWBUTTON_H



#import "UIButton.h"
#import "UIColor.h"

@interface UIAssistantBarRoundedButtonViewButton : UIButton

@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (retain, nonatomic) UIColor *highlightedTitleColor; // ivar: _highlightedTitleColor
@property (retain, nonatomic) UIColor *normalBackgroundColor; // ivar: _normalBackgroundColor
@property (retain, nonatomic) UIColor *normalTitleColor; // ivar: _normalTitleColor


-(id)_currentTitleColor;
-(id)_titleColorForState:(NSUInteger)arg0 ;
-(void)_updateBackgroundAndTitleColor;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif