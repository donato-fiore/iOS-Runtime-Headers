// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHSEARCHTEXTFIELD_H
#define SBHSEARCHTEXTFIELD_H

@class UISearchTextField, UIView, NSHashTable, UIImage, NSString;
@protocol UIPointerInteractionDelegate;



@interface SBHSearchTextField : UISearchTextField <UIPointerInteractionDelegate>

 {
    UIView *_backgroundView;
    NSHashTable *_styledViews;
    UIImage *_magnifyingGlassImage;
    UIImage *_cancelButtonImage;
    BOOL _alwaysHideLeadingView;
}


@property (nonatomic) NSInteger alignmentBehavior; // ivar: _alignmentBehavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_derivedTextAlignmentForBehavior:(NSInteger)arg0 hasSearchText:(BOOL)arg1 isEditing:(BOOL)arg2 ;
+(id)borderColorForUserInterfaceStyle:(NSInteger)arg0 ;
-(BOOL)_hasSearchText;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(CGFloat)_calculateHeightWithFont;
-(NSInteger)_derivedTextAlignment;
-(NSInteger)_derivedTextAlignmentIfEditing:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_adjustedTextOrEditingRect:(struct CGRect )arg0 forBounds:(struct CGRect )arg1 ;
-(struct CGRect )_calculateEditingRectForBounds:(struct CGRect )arg0 alignment:(NSInteger)arg1 isRTL:(BOOL)arg2 ;
-(struct CGRect )_calculatePlaceholderRectForBounds:(struct CGRect )arg0 alignment:(NSInteger)arg1 isRTL:(BOOL)arg2 ;
-(struct CGRect )_calculateTextRectForBounds:(struct CGRect )arg0 alignment:(NSInteger)arg1 isRTL:(BOOL)arg2 ;
-(struct CGRect )_frameForLeftViewWithinBounds:(struct CGRect )arg0 alignment:(NSInteger)arg1 ;
-(struct CGRect )_frameForPlaceholderRectForBounds:(struct CGRect )arg0 alignment:(NSInteger)arg1 isRTL:(BOOL)arg2 willOverflow:(*BOOL)arg3 ;
-(struct CGRect )_frameForRightViewWithinBounds:(struct CGRect )arg0 alignment:(NSInteger)arg1 ;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )leftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didBeginEditing:(id)arg0 ;
-(void)_didEndEditing:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_textDidChange:(id)arg0 ;
-(void)_updateTextAlignmentForEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setFont:(id)arg0 ;
-(void)setReturnKeyType:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBorderVisualStyling;
-(void)updateStyleForClearButton;
-(void)updateStyleForLeftView;
-(void)updateStyleForPlaceholderView;
-(void)updateStyleForRightView;
-(void)updateVisualStyling;


@end


#endif