// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCCREATECONTACTNAVIGATIONVIEWCONTROLLER_H
#define NCCREATECONTACTNAVIGATIONVIEWCONTROLLER_H

@class _UNNotificationContact, NSString;
@protocol CNContactViewControllerDelegate, NCModalNavigationControllerDelegate><NCCreateContactNavigationViewControllerDelegate;


#import "NCModalNavigationController.h"

@interface NCCreateContactNavigationViewController : NCModalNavigationController <CNContactViewControllerDelegate>

 {
    _UNNotificationContact *_contact;
    NSString *_bundleIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NCModalNavigationControllerDelegate><NCCreateContactNavigationViewControllerDelegate> *presenterDelegate;
@property (readonly) Class superclass;


+(id)navigationControllerWithContact:(id)arg0 bundleIdentifier:(id)arg1 imageData:(id)arg2 presenterDelegate:(id)arg3 ;
-(id)_initWithContact:(id)arg0 bundleIdentifier:(id)arg1 imageData:(id)arg2 presenterDelegate:(id)arg3 ;
-(void)_cancelAddToContacts:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;


@end


#endif