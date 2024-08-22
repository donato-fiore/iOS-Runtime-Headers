// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIATAGSVIEW_H
#define VUIMEDIATAGSVIEW_H

@class UIImage, NSString, NSArray, NSDictionary;
@protocol VUIRentalExpirationLabelDelegate, VUILabelBaselineProtocol;


#import "VUIBaseView.h"
#import "VUIMediaTagsViewLayout.h"

@interface VUIMediaTagsView : VUIBaseView <VUIRentalExpirationLabelDelegate, VUILabelBaselineProtocol>



@property (retain, nonatomic) UIImage *commonSenseDarkImage; // ivar: _commonSenseDarkImage
@property (retain, nonatomic) UIImage *commonSenseLightImage; // ivar: _commonSenseLightImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *groupedSubviews; // ivar: _groupedSubviews
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout; // ivar: _tagsViewLayout
@property (nonatomic) CGFloat totalSubviewsWidth; // ivar: _totalSubviewsWidth
@property (copy, nonatomic) NSDictionary *viewsMap; // ivar: _viewsMap


+(id)tagsViewWithMetadata:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
-(BOOL)_shouldApplyTintColor:(id)arg0 forImage:(id)arg1 ;
-(BOOL)_shouldPutTextOnSeparateLines;
-(CGFloat)bottomMarginToLabel:(id)arg0 withBaselineMargin:(CGFloat)arg1 ;
-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)topMarginToLabel:(id)arg0 withBaselineMargin:(CGFloat)arg1 ;
-(CGFloat)topMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)vui_baselineOffsetFromBottom;
-(id)_firstLabelSubview;
-(id)_newImageViewAsSubview:(BOOL)arg0 ;
-(id)_newLabelAsSubview:(id)arg0 ;
-(id)_newLabelAsSubview:(id)arg0 withAttributedString:(id)arg1 ;
-(id)_newRentalExpirationlabel:(id)arg0 exisitingLabel:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 layout:(id)arg1 ;
-(struct CGSize )_layoutSubviewsForSize:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_removeGenreLabelAndSeparator;
-(void)_removeSeparatorsFromGroupsIfNeeded:(BOOL)arg0 ;
-(void)_updateAppearanceWithUserInterfaceStyle:(NSUInteger)arg0 ;
-(void)_updateImageAppearanceWithUserInterfaceStyle:(NSUInteger)arg0 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg0 ;
-(void)updateWithMetadata:(id)arg0 ;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif