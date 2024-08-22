// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTINFOCERTIFICATELISTTABLEVIEWCELL_H
#define CERTINFOCERTIFICATELISTTABLEVIEWCELL_H

@class UITableViewCell;


#import "CertInfoCertificateListCellContentView.h"

@interface CertInfoCertificateListTableViewCell : UITableViewCell {
    CertInfoCertificateListCellContentView *_certificateContentView;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateWithTrustDescription:(id)arg0 certificateIndex:(NSUInteger)arg1 ;


@end


#endif