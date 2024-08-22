// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDSTOREINFOVIEWCONTROLLER_H
#define MSDSTOREINFOVIEWCONTROLLER_H

@class UIViewController;
@protocol MSDStoreInfoViewControllerDelegate;


#import "MSDStoreInfo.h"

@interface MSDStoreInfoViewController : UIViewController

@property (retain, nonatomic) NSObject<MSDStoreInfoViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MSDStoreInfo *storeInfo; // ivar: _storeInfo


-(id)_boldConfiguration;
-(id)_stackedCancelButton;
-(id)_stackedLabelWithTitle:(id)arg0 andDescription:(id)arg1 ;
-(id)_stackedStoreName:(id)arg0 withIcon:(id)arg1 andIconColor:(id)arg2 ;
-(id)initWithStoreInfo:(id)arg0 andDelegate:(id)arg1 ;
-(void)_close:(id)arg0 ;
-(void)_confirm:(id)arg0 ;
-(void)_showAutoEnrolInEligibleAlert;
-(void)_showConfirmationAlert;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif