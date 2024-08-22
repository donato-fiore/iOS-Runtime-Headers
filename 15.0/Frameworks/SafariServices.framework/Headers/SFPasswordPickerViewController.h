// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPASSWORDPICKERVIEWCONTROLLER_H
#define SFPASSWORDPICKERVIEWCONTROLLER_H

@class UINavigationController, _ASIncomingCallObserver, NSString;
@protocol _SFPasswordPickerTableViewControllerDelegate;


#import "_SFPasswordPickerTableViewController.h"

@interface SFPasswordPickerViewController : UINavigationController <_SFPasswordPickerTableViewControllerDelegate>

 {
    id *_completionHandler;
    _SFPasswordPickerTableViewController *_passwordPickerTableViewController;
    _ASIncomingCallObserver *_callObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)_appDidEnterBackground:(id)arg0 ;
-(void)_dismiss;
-(void)dealloc;
-(void)passwordPickerTableViewController:(id)arg0 didPickSavedPassword:(id)arg1 ;
-(void)passwordPickerTableViewControllerDidCancel:(id)arg0 ;


@end


#endif