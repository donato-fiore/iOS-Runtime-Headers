// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGADGETSECTIONHEADERUIVIEW_H
#define PXGADGETSECTIONHEADERUIVIEW_H

@class UICollectionReusableView, UIButton, NSString, UIView, UILabel;
@protocol PXChangeObserver;


#import "PXGadgetSectionHeader.h"

@interface PXGadgetSectionHeaderUIView : UICollectionReusableView <PXChangeObserver>

 {
    ? _updateFlags;
}


@property (readonly, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *divider; // ivar: _divider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXGadgetSectionHeader *headerModel; // ivar: _headerModel
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)_heightThatFitsFirstToLastBaselineWithText:(id)arg0 width:(CGFloat)arg1 font:(id)arg2 ;
+(CGFloat)_preferredHeightForText:(id)arg0 fittingWidth:(CGFloat)arg1 style:(NSUInteger)arg2 dividerHidden:(BOOL)arg3 ;
+(CGFloat)preferredHeightForText:(id)arg0 buttonType:(NSUInteger)arg1 fittingWidth:(CGFloat)arg2 style:(NSUInteger)arg3 dividerHidden:(BOOL)arg4 isAccessibilitySize:(BOOL)arg5 ;
+(id)_sizingButton;
+(id)_sizingLabel;
+(struct CGSize )_preferredSizeOfButtonWithType:(NSUInteger)arg0 width:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonPressed;
-(void)_updateAccessoryButton;
-(void)_updateTitle;
-(void)configureAccessoryButton:(id)arg0 ;
-(void)configureTitleLabel:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif