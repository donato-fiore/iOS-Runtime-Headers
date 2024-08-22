// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONDRAWERSIRISUGGESTIONSCOLLECTIONVIEWCELL_H
#define WFACTIONDRAWERSIRISUGGESTIONSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIViewController, NSArray, WFActionDrawerImage, WFActionDrawerImageLoadTask, NSString, UILabel;
@protocol VCActionDonation;


#import "WFCircularImageView.h"

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) NSInteger cellType; // ivar: _cellType
@property (weak, nonatomic) UIViewController *containingViewController; // ivar: _containingViewController
@property (readonly, nonatomic) NSObject<VCActionDonation> *donation; // ivar: _donation
@property (retain, nonatomic) NSArray *horizontalStackConstraints; // ivar: _horizontalStackConstraints
@property (retain, nonatomic) WFActionDrawerImage *image; // ivar: _image
@property (retain, nonatomic) WFActionDrawerImageLoadTask *imageLoadTask; // ivar: _imageLoadTask
@property (weak, nonatomic) WFCircularImageView *imageView; // ivar: _imageView
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSArray *verticalStackConstraints; // ivar: _verticalStackConstraints


+(BOOL)shouldStackVerticallyForTraitCollection:(id)arg0 ;
+(CGFloat)spacingForType:(NSInteger)arg0 ;
+(struct CGSize )preferredSizeForType:(NSInteger)arg0 forTraitCollection:(id)arg1 ;
+(struct CGSize )sizeForCellUsingVerticalStacking:(BOOL)arg0 ;
-(BOOL)shouldStackVerticallyForTraitCollection:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)adjustStackingStyle;
-(void)configureWithCellType:(NSInteger)arg0 title:(id)arg1 donation:(id)arg2 genericAction:(id)arg3 forDailyRoutines:(BOOL)arg4 ;
-(void)loadImageForInteractionDonation:(id)arg0 ;
-(void)prepareForReuse;
-(void)setUpLayoutConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif