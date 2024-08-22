// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CERTINFOSHEETVIEWCONTROLLER_H
#define CERTINFOSHEETVIEWCONTROLLER_H

@class UIViewController, NSString, NSDate, NSArray;
@protocol CertInfoSheetViewControllerDelegate;



@interface CertInfoSheetViewController : UIViewController

@property (weak, nonatomic) NSObject<CertInfoSheetViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSDate *trustExpiration; // ivar: _trustExpiration
@property (retain, nonatomic) NSArray *trustProperties; // ivar: _trustProperties
@property (retain, nonatomic) NSString *trustPurpose; // ivar: _trustPurpose
@property (retain, nonatomic) NSString *trustSubtitle; // ivar: _trustSubtitle
@property (retain, nonatomic) NSString *trustTitle; // ivar: _trustTitle


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)_accept;
-(void)_cancel;
-(void)_dismissWithResult:(int)arg0 ;
-(void)_pushDetailsView;
-(void)_setupNavItem;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif