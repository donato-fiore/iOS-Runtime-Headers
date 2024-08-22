// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTINFOCERTIFICATEDETAILSCONTROLLER_H
#define CERTINFOCERTIFICATEDETAILSCONTROLLER_H

@class UITableViewController, NSArray, UIBarButtonItem;
@protocol CertInfoCertificateDetailsControllerDelegate;



@interface CertInfoCertificateDetailsController : UITableViewController {
    NSArray *_sectionDictionaries;
    UIBarButtonItem *_doneButton;
    BOOL _showsDoneButton;
}


@property (weak, nonatomic) NSObject<CertInfoCertificateDetailsControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showsDoneButton;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_propertiesForIndexPath:(id)arg0 ;
-(id)_sectionsForProperties:(id)arg0 ;
-(id)_sectionsForProperties:(id)arg0 currentSectionDictionary:(id)arg1 ;
-(id)initWithCertificateProperties:(id)arg0 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 certificateIndex:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;


@end


#endif