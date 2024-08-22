// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUBUTTONCELLROWVIEW_H
#define MUBUTTONCELLROWVIEW_H

@class UILayoutGuide, UILabel, UIButton, UITapGestureRecognizer, NSLayoutConstraint, NSString;
@protocol MUDynamicButtonCellModelChangeDelegate, MUDynamicButtonCellModel;


#import "MUPlaceSectionRowView.h"
#import "MUCirclePlatterView.h"

@interface MUButtonCellRowView : MUPlaceSectionRowView <MUDynamicButtonCellModelChangeDelegate>

 {
    UILayoutGuide *_titleValueLayoutGuide;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIButton *_menuButton;
    MUCirclePlatterView *_actionPlatterView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_platterWidthConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MUDynamicButtonCellModel> *viewModel; // ivar: _viewModel


-(CGFloat)_platterLength;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonCellTapped;
-(void)_contentSizeDidChange;
-(void)_setupAccessibilityIdentifier;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)dynamicButtonCellModelDidChange:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif