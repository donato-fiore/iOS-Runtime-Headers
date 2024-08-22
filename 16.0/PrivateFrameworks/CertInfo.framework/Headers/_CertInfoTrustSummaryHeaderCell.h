// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CERTINFOTRUSTSUMMARYHEADERCELL_H
#define _CERTINFOTRUSTSUMMARYHEADERCELL_H

@class UITableViewCell, UIImage, UILabel, NSString;


#import "_CertInfoActionButton.h"
#import "_CertInfoGradientLabel.h"

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _CertInfoActionButton *_actionButton;
    _CertInfoGradientLabel *_trustedLabel;
}


@property (readonly, weak, nonatomic) _CertInfoActionButton *actionButton;
@property (readonly, nonatomic) CGFloat rowHeight;
@property (copy, nonatomic) NSString *trustSubtitle;
@property (copy, nonatomic) NSString *trustTitle;
@property (nonatomic, getter=isTrusted) BOOL trusted; // ivar: _trusted


-(id)_subtitleLabel;
-(id)_titleLabel;
-(id)_trustedLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_layoutSubviewsWithActionButtonSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setExpired:(BOOL)arg0 ;


@end


#endif