// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CERTIFICATEVIEWCONTROLLER_H
#define CERTIFICATEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSDate, NSArray;



@interface CertificateViewController : UITableViewController

@property (nonatomic) int certUIAction; // ivar: _certUIAction
@property (copy, nonatomic) id *certificateButtonActionHandler; // ivar: _certificateButtonActionHandler
@property (retain, nonatomic) NSString *certificateButtonDescription; // ivar: _certificateButtonDescription
@property (nonatomic) BOOL certificateButtonIsDestructiveAction; // ivar: _certificateButtonIsDestructiveAction
@property (retain, nonatomic) NSString *certificateButtonTitle; // ivar: _certificateButtonTitle
@property (retain, nonatomic) NSDate *certificateExpiration; // ivar: _certificateExpiration
@property (nonatomic) BOOL certificateIsRoot; // ivar: _certificateIsRoot
@property (retain, nonatomic) NSString *certificateIssuer; // ivar: _certificateIssuer
@property (retain, nonatomic) NSArray *certificateProperties; // ivar: _certificateProperties
@property (retain, nonatomic) NSString *certificatePurpose; // ivar: _certificatePurpose
@property (retain, nonatomic) NSString *certificateTitle; // ivar: _certificateTitle
@property (retain, nonatomic) id *certificateTrust; // ivar: _certificateTrust
@property (nonatomic) BOOL showCertificateButton; // ivar: _showCertificateButton


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithTrust:(struct __SecTrust *)arg0 action:(int)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)preferredContentSizeChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif