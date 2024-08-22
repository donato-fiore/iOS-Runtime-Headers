// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTINFOTRUSTDETAILSVIEW_H
#define CERTINFOTRUSTDETAILSVIEW_H

@class UIView, NSArray;


#import "CertInfoCertificateDetailsView.h"

@interface CertInfoTrustDetailsView : UIView {
    NSArray *_certificateViews;
    CertInfoCertificateDetailsView *_currentCertView;
}




-(id)initWithFrame:(struct CGRect )arg0 trustProperties:(id)arg1 ;
-(void)_appendRemainingCertificates;
-(void)layoutSubviews;


@end


#endif