// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACECARDACTIONSECTIONVIEW_H
#define MKPLACECARDACTIONSECTIONVIEW_H

@class NSLayoutConstraint, UIView, UIButton;
@protocol MKPlaceCardActionSectionViewDelegate;


#import "MKPlaceSectionRowView.h"
#import "MKPlaceCardActionItem.h"

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {
    BOOL _useMarginLayout;
    BOOL _usingSmallFonts;
    NSLayoutConstraint *_heightAnchor;
    NSLayoutConstraint *_leftButtonYConstraint;
    NSLayoutConstraint *_rightButtonYConstraint;
    NSLayoutConstraint *_platterSizeConstraint;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (weak, nonatomic) NSObject<MKPlaceCardActionSectionViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *leftButton; // ivar: _leftButton
@property (retain, nonatomic) MKPlaceCardActionItem *leftItem; // ivar: _leftItem
@property (retain, nonatomic) UIButton *rightButton; // ivar: _rightButton
@property (retain, nonatomic) MKPlaceCardActionItem *rightItem; // ivar: _rightItem
@property (nonatomic) BOOL singleItemIsFullWidth; // ivar: _singleItemIsFullWidth


+(id)_font:(BOOL)arg0 ;
+(void)_setButtonString:(id)arg0 forActionItem:(id)arg1 isLeftItem:(BOOL)arg2 ;
-(id)_makePlaceActionButtonWithActionItem:(id)arg0 isLeftItem:(BOOL)arg1 useSmallFonts:(BOOL)arg2 ;
-(id)currentLeftItem;
-(id)glyphFont;
-(id)initWithLeftActionItem:(id)arg0 rightActionItem:(id)arg1 useSmallFonts:(BOOL)arg2 singleItemIsFullWidth:(BOOL)arg3 ;
-(id)initWithLeftActionItem:(id)arg0 rightActionItem:(id)arg1 useSmallFonts:(BOOL)arg2 singleItemIsFullWidth:(BOOL)arg3 useMarginLayout:(BOOL)arg4 ;
-(void)_contentSizeDidChange;
-(void)_leftButtonIsPressed:(id)arg0 ;
-(void)_rightButtonIsPressed:(id)arg0 ;
-(void)_setUpViewWithButtons;
-(void)dealloc;
-(void)infoCardThemeChanged;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setTopHairlineHidden:(BOOL)arg0 ;


@end


#endif