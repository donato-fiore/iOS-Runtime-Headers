// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCONTROLSTATUSINDICATOR_H
#define CAMCONTROLSTATUSINDICATOR_H

@class UIControl, UIImageView, UIView, UILabel, NSString;
@protocol CAMAccessibilityHUDItemProvider, CAMControlStatusIndicatorDelegate;


#import "CAMSlashMaskView.h"
#import "CAMSlashView.h"

@interface CAMControlStatusIndicator : UIControl <CAMAccessibilityHUDItemProvider>



@property (retain, nonatomic) UIImageView *_imageView; // ivar: __imageView
@property (nonatomic, setter=_setNeedsUpdateValueText:) BOOL _needsUpdateValueText; // ivar: __needsUpdateValueText
@property (readonly, nonatomic) UIImageView *_outlineView; // ivar: __outlineView
@property (readonly, nonatomic) UIView *_slashMaskContainer; // ivar: __slashMaskContainer
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView; // ivar: __slashMaskView
@property (readonly, nonatomic) CAMSlashView *_slashView; // ivar: __slashView
@property (readonly, nonatomic) UILabel *_valueLabel; // ivar: __valueLabel
@property (nonatomic, setter=_setValueLabelSize:) CGSize _valueLabelSize; // ivar: __valueLabelSize
@property (readonly, nonatomic) BOOL canShowValue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMControlStatusIndicatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic, getter=isShowingValue) BOOL showingValue; // ivar: _showingValue
@property (readonly, nonatomic) UIView *slashContainerView;
@property (readonly) Class superclass;


+(id)_createStretchableCircleImageFilled:(BOOL)arg0 ;
+(id)_filledOutlineImage;
+(id)_outlineImage;
+(id)decimalFormatter;
+(id)integerFormatter;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseHierarchicalSymbol;
-(BOOL)shouldUseOutline;
-(BOOL)shouldUseSlash;
-(BOOL)supportsOrientations;
-(CGFloat)_additionalWidthForValue;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)imageForCurrentState;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)valueText;
-(struct CGSize )intrinsicContentSize;
-(void)_updateImageOrientationAnimated:(BOOL)arg0 ;
-(void)_updateSlashAnimated:(BOOL)arg0 ;
-(void)_updateValueLabelVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateValueText;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)setNeedsUpdateValueText;
-(void)updateImage;
-(void)updateImageAnimated:(BOOL)arg0 ;


@end


#endif