// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACCOUNTPICKERVIEWCONTROLLER_H
#define SFACCOUNTPICKERVIEWCONTROLLER_H

@class UINavigationController, _ASIncomingCallObserver, LAContext, NSString;
@protocol _SFAccountPickerTableViewControllerDelegate;


#import "_SFAccountPickerTableViewController.h"

@interface SFAccountPickerViewController : UINavigationController <_SFAccountPickerTableViewControllerDelegate>

 {
    id *_completionHandler;
    _SFAccountPickerTableViewController *_accountPickerTableViewController;
    _ASIncomingCallObserver *_callObserver;
}


@property (retain, nonatomic) LAContext *authenticatedContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)_appDidEnterBackground:(id)arg0 ;
-(void)_dismiss;
-(void)accountPickerTableViewController:(id)arg0 didPickSavedAccount:(id)arg1 ;
-(void)accountPickerTableViewControllerDidCancel:(id)arg0 ;
-(void)dealloc;


@end


#endif