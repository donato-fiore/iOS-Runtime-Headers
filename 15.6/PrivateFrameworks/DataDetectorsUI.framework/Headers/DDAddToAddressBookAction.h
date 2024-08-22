// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDADDTOADDRESSBOOKACTION_H
#define DDADDTOADDRESSBOOKACTION_H



#import "DDAddressAction.h"
#import "DDRemoteActionViewController.h"

@interface DDAddToAddressBookAction : DDAddressAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;


+(BOOL)actionAvailableForContact:(id)arg0 ;
-(id)compactTitle;
-(id)contact;
-(id)localizedName;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(id)notificationURL;
-(int)interactionType;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;
-(void)invalidate;
-(void)prepareViewControllerForActionController:(id)arg0 ;


@end


#endif