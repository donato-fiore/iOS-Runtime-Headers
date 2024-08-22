// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOPICKERREMOTENAVIGATIONCONTROLLER_H
#define PUPHOTOPICKERREMOTENAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol PUPhotoPickerRemoteNavigationControllerDelegate;



@interface PUPhotoPickerRemoteNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<PUPhotoPickerRemoteNavigationControllerDelegate> *remoteViewControllerDelegate; // ivar: _remoteViewControllerDelegate


-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif