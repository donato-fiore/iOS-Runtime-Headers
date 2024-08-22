// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTINFOTRUSTDETAILSVIEWCONTROLLER_H
#define CERTINFOTRUSTDETAILSVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface CertInfoTrustDetailsViewController : UIViewController

@property (retain, nonatomic) NSArray *trustProperties; // ivar: _trustProperties


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)_setupNavItem;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif