// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTIFICATEDETAILSSUMMARYCELL_H
#define CERTIFICATEDETAILSSUMMARYCELL_H

@class NSArray;


#import "CertUIItemDetailsSummaryCell.h"

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell

@property (retain, nonatomic) NSArray *details; // ivar: _details


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setCertificateTrust:(struct __SecTrust *)arg0 certificateExpiration:(id)arg1 certificateIsTrusted:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif