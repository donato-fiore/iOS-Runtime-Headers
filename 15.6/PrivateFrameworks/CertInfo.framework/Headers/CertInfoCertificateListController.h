// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTINFOCERTIFICATELISTCONTROLLER_H
#define CERTINFOCERTIFICATELISTCONTROLLER_H

@class UITableViewController;
@protocol CertInfoTrustDescription;



@interface CertInfoCertificateListController : UITableViewController {
    id<CertInfoTrustDescription> *_description;
}




-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTrustDescription:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif