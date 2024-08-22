// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTINFOCERTIFICATESUMMARYVIEW_H
#define CERTINFOCERTIFICATESUMMARYVIEW_H

@class UIView, NSString, NSDate, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "CertInfoCertificateSummaryDescriptionCell.h"
#import "CertInfoCertificateHeaderCell.h"

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate>

 {
    id *_moreDetailsSelectedBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CertInfoCertificateSummaryDescriptionCell *descriptionCell; // ivar: _descriptionCell
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CertInfoCertificateHeaderCell *headerCell; // ivar: _headerCell
@property (retain, nonatomic) NSString *purpose; // ivar: _purpose
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSString *trustSubtitle; // ivar: _trustSubtitle
@property (retain, nonatomic) NSString *trustTitle; // ivar: _trustTitle


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForReuseIdentifier:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg0 ;
-(void)setMoreDetailsSelectedBlock:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif