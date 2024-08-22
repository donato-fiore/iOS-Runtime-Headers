// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CERTIFICATESUMMARYTABLEVIEWCELL_H
#define CERTIFICATESUMMARYTABLEVIEWCELL_H



#import "CertUIItemSummaryCell.h"

@interface CertificateSummaryTableViewCell : CertUIItemSummaryCell



-(void)setCertificateName:(id)arg0 issuer:(id)arg1 isRoot:(BOOL)arg2 ;
-(void)updateWithCertificateTrust:(struct __SecTrust *)arg0 ;


@end


#endif