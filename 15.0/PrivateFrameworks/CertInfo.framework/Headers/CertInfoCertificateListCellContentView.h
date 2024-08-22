// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTINFOCERTIFICATELISTCELLCONTENTVIEW_H
#define CERTINFOCERTIFICATELISTCELLCONTENTVIEW_H

@class UIView, UILabel;



@interface CertInfoCertificateListCellContentView : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_expirationLabel;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setText:(id)arg0 forLabel:(id)arg1 withRedColor:(BOOL)arg2 ;
-(void)_setupLabel:(id)arg0 isSubtitle:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setExpiration:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif