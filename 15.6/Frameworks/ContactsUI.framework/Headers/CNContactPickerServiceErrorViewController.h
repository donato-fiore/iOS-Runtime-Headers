// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTPICKERSERVICEERRORVIEWCONTROLLER_H
#define CNCONTACTPICKERSERVICEERRORVIEWCONTROLLER_H

@class UIBarButtonItem, NSString, UINavigationController;
@protocol CNContactPickerContentViewController, CNContactPickerContentDelegate;


#import "CNErrorViewController.h"

@interface CNContactPickerServiceErrorViewController : CNErrorViewController <CNContactPickerContentViewController>



@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem; // ivar: addContactBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactPickerContentDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: navigationController
@property (readonly) Class superclass;


-(void)invalidate;
-(void)invalidateSelectionAnimated:(BOOL)arg0 ;
-(void)setupWithOptions:(id)arg0 readyBlock:(id)arg1 ;


@end


#endif