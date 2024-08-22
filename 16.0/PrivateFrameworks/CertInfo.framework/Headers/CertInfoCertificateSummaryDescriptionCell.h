// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CERTINFOCERTIFICATESUMMARYDESCRIPTIONCELL_H
#define CERTINFOCERTIFICATESUMMARYDESCRIPTIONCELL_H

@class UITableViewCell;


#import "CertInfoDescriptionCellContentView.h"

@interface CertInfoCertificateSummaryDescriptionCell : UITableViewCell {
    CertInfoDescriptionCellContentView *_customContentView;
}




-(CGFloat)rowHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setLabelsAndValues:(id)arg0 ;


@end


#endif