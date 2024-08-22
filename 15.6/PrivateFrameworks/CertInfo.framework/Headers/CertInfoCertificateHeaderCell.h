// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTINFOCERTIFICATEHEADERCELL_H
#define CERTINFOCERTIFICATEHEADERCELL_H

@class UITableViewCell, UIImage, UILabel;


#import "CertInfoGradientLabel.h"

@interface CertInfoCertificateHeaderCell : UITableViewCell {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CertInfoGradientLabel *_trustedLabel;
}




-(CGFloat)rowHeight;
-(id)_certificateImage;
-(id)_notTrustedGradient;
-(id)_subtitleLabel;
-(id)_titleLabel;
-(id)_trustedLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)setExpired:(BOOL)arg0 ;
-(void)setTrustSubtitle:(id)arg0 ;
-(void)setTrustTitle:(id)arg0 ;


@end


#endif