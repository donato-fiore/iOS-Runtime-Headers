// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSEWEBCONTENTVARIATIONVIEW_H
#define MFCOMPOSEWEBCONTENTVARIATIONVIEW_H

@class UIView, NSString, UIButton;


#import "MFMailComposeHeaderView.h"

@interface MFComposeWebContentVariationView : MFMailComposeHeaderView

@property (retain, nonatomic) UIView *background; // ivar: _background
@property (readonly, nonatomic) NSString *selectedContentVariation; // ivar: _selectedContentVariation
@property (retain, nonatomic) UIButton *webContentVariableButton; // ivar: _webContentVariableButton


-(id)_generateActionsForTitles:(id)arg0 currentSelection:(NSUInteger)arg1 handler:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_flashBackground;
-(void)layoutSubviews;
-(void)refreshPreferredContentSize;
-(void)setupMenuItemTitles:(id)arg0 currentSelection:(NSUInteger)arg1 handler:(id)arg2 ;


@end


#endif