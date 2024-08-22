// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCCREATECONTACTNAVIGATIONVIEWCONTROLLER_H
#define NCCREATECONTACTNAVIGATIONVIEWCONTROLLER_H

@class UINavigationController, _UNNotificationContact, NSString;
@protocol CNContactViewControllerDelegate, NCCreateContactNavigationViewControllerDelegate;



@interface NCCreateContactNavigationViewController : UINavigationController <CNContactViewControllerDelegate>

 {
    _UNNotificationContact *_contact;
    NSString *_bundleIdentifier;
}


@property (weak, nonatomic) NSObject<NCCreateContactNavigationViewControllerDelegate> *createContactDelegate; // ivar: _createContactDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)navigationControllerWithContact:(id)arg0 bundleIdentifier:(id)arg1 imageData:(id)arg2 createContactDelegate:(id)arg3 ;
-(id)_initWithContact:(id)arg0 bundleIdentifier:(id)arg1 imageData:(id)arg2 createContactDelegate:(id)arg3 ;
-(void)_cancelAddToContacts:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif