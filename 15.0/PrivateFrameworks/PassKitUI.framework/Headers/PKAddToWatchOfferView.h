// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDTOWATCHOFFERVIEW_H
#define PKADDTOWATCHOFFERVIEW_H

@class UIView, PKPaymentPass, UIImageView, UILabel;


#import "PKWatchHeroImageView.h"
#import "PKContinuousButton.h"

@interface PKAddToWatchOfferView : UIView {
    PKWatchHeroImageView *_heroImageView;
    UIView *_backgroundView;
    CGSize _aspectSize;
    BOOL _isCompactWatch;
}


@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) PKContinuousButton *openAppButton; // ivar: _openAppButton
@property (readonly, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly, nonatomic) UIImageView *passImageView; // ivar: _passImageView
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_isSmallPhone;
-(CGFloat)_sideMargin;
-(id)initWithPaymentPass:(id)arg0 context:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)showSpinner:(BOOL)arg0 ;


@end


#endif