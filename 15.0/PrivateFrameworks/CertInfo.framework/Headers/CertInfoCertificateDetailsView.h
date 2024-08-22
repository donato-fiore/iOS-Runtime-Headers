// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTINFOCERTIFICATEDETAILSVIEW_H
#define CERTINFOCERTIFICATEDETAILSVIEW_H

@class UIView, UITableView, NSMutableArray, NSString;
@protocol UITableViewDataSource;



@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource>

 {
    UITableView *_tableView;
    NSMutableArray *_tableSections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellInfosForSection:(id)arg0 ;
-(id)_detailForIndexPath:(id)arg0 ;
-(id)_sectionInfoForCertSection:(id)arg0 title:(id)arg1 ;
-(id)_sectionsFromProperties:(id)arg0 ;
-(id)_titleForIndexPath:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 certificateProperties:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)appendInfoFromCertView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif