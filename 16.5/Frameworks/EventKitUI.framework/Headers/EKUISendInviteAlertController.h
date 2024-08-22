// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUISENDINVITEALERTCONTROLLER_H
#define EKUISENDINVITEALERTCONTROLLER_H

@class UIAlertController, NSString;
@protocol UIActionSheetDelegate;

#import <Foundation/Foundation.h>

#import "EKUISendInviteAlertController.h"

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate>



@property (retain) UIAlertController *alertController; // ivar: _alertController
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) EKUISendInviteAlertController *strongSelf; // ivar: _strongSelf
@property (readonly) Class superclass;


+(id)newAlertControllerWithCompletionHandler:(id)arg0 ;
+(id)presentInviteAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 withCompletionHandler:(id)arg2 ;
-(BOOL)_useSheetForViewController:(id)arg0 ;
-(void)_cleanup;
-(void)_completeWithSelection:(int)arg0 ;
-(void)_presentAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 ;
-(void)cancelAnimated:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif