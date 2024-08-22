// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCLOUDPHOTOWELCOMENAVIGATIONCONTROLLER_H
#define PXCLOUDPHOTOWELCOMENAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol PXCloudPhotoWelcomeNavigationControllerDismissDelegate;



@interface PXCloudPhotoWelcomeNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<PXCloudPhotoWelcomeNavigationControllerDismissDelegate> *dismissDelegate; // ivar: _dismissDelegate


+(BOOL)shouldPresentWelcomeViewController:(*BOOL)arg0 ;
+(id)new;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithWelcomeController:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif