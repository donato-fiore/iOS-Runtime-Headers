// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYLOCKUPVIEWCELL_H
#define VUILIBRARYLOCKUPVIEWCELL_H

@class UICollectionViewCell, NSString, VUIImageView;
@protocol VUIRentalExpirationLabelDelegate;


#import "VUIRentalExpirationLabel.h"
#import "VUILabel.h"

@interface VUILibraryLockupViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIRentalExpirationLabel *expirationLabel; // ivar: _expirationLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideTitleLabel; // ivar: _hideTitleLabel
@property (nonatomic) CGFloat imageAspectRatio; // ivar: _imageAspectRatio
@property (retain, nonatomic) VUIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


+(void)configureImageViewArtworkForLockupCell:(id)arg0 withMedia:(id)arg1 width:(CGFloat)arg2 ;
+(void)configureLockupCell:(id)arg0 withMedia:(id)arg1 width:(CGFloat)arg2 forMetrics:(BOOL)arg3 ;
-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif