// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFFOCUSPOSTERCELL_H
#define PBFFOCUSPOSTERCELL_H

@class UICollectionViewCell, UIView, UIImageView, NSLayoutConstraint, NSString, UIImage;
@protocol PBFPosterPreview, PBFPosterPreviewGenerator;


#import "PBFPosterGalleryPreviewComplicationContentView.h"
#import "PBFFocusCheckboxView.h"

@interface PBFFocusPosterCell : UICollectionViewCell {
    UIView *_shadowView;
    UIImageView *_posterView;
    PBFPosterGalleryPreviewComplicationContentView *_posterPreviewComplicationContentView;
    PBFFocusCheckboxView *_checkboxView;
    UIImageView *_focusSymbolView;
    NSLayoutConstraint *_posterViewHeightConstraint;
}


@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic, getter=isCheckboxOn) BOOL checkboxOn; // ivar: _checkboxOn
@property (copy, nonatomic) NSString *focusSymbolImageName; // ivar: _focusSymbolImageName
@property (retain, nonatomic) UIImage *posterImage; // ivar: _posterImage
@property (retain, nonatomic) NSObject<PBFPosterPreview> *posterPreview; // ivar: _posterPreview
@property (readonly, nonatomic) CGRect posterPreviewFrame;
@property (weak, nonatomic) NSObject<PBFPosterPreviewGenerator> *posterPreviewGenerator; // ivar: _posterPreviewGenerator


+(CGFloat)cornerRadius;
+(struct CGSize )estimatedCellSizeForItemWidth:(CGFloat)arg0 screen:(id)arg1 hasAccessory:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)makeComplicationsPortalView;
-(void)createCheckboxViewIfNecessary;
-(void)createConstraints;
-(void)createFocusSymbolViewIfNecessary;
-(void)createPosterView;
-(void)createPreviewComplicationContentView;
-(void)createShadowView;
-(void)setCheckboxAssociatedPosterIdentifier:(id)arg0 ;


@end


#endif