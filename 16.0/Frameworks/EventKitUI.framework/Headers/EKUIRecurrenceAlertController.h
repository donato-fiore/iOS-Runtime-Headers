// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIRECURRENCEALERTCONTROLLER_H
#define EKUIRECURRENCEALERTCONTROLLER_H

@class UIAlertController, NSString;
@protocol UIActionSheetDelegate;

#import <Foundation/Foundation.h>


@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate>



@property (retain) UIAlertController *alertController; // ivar: _alertController
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_cancelLocalizedString;
+(id)_detachAllLocalizedString;
+(id)_detachFutureLocalizedString;
+(id)deleteAlertWithOptions:(NSUInteger)arg0 forEvent:(id)arg1 stringForDeleteButton:(id)arg2 withCompletionHandler:(id)arg3 ;
+(id)newAlertControllerWithCompletionHandler:(id)arg0 ;
+(id)presentAttachmentAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 barButtonItem:(id)arg2 forEvent:(id)arg3 withCompletionHandler:(id)arg4 ;
+(id)presentDeleteAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 barButtonItem:(id)arg2 forEvent:(id)arg3 stringForDeleteButton:(id)arg4 withCompletionHandler:(id)arg5 ;
+(id)presentDeleteAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 forEvents:(id)arg2 withCompletionHandler:(id)arg3 ;
+(id)presentDeleteAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 forEvent:(id)arg4 stringForDeleteButton:(id)arg5 withCompletionHandler:(id)arg6 ;
+(id)presentDetachAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 barButtonItem:(id)arg2 forEvent:(id)arg3 withCompletionHandler:(id)arg4 ;
+(id)presentDetachAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 forEvent:(id)arg4 withCompletionHandler:(id)arg5 ;
+(id)presentUnsubscribeAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 withCompletionHandler:(id)arg4 ;
+(id)unsubscribeAlertWithOptions:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
+(int)_determineChoicesForEvent:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)_setupDeleteAlertForEvents:(id)arg0 ;
-(BOOL)_useSheetForViewController:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_cleanup;
-(void)_completeWithSelection:(int)arg0 ;
-(void)_configureAlertControllerWithSourceView:(id)arg0 sourceRect:(struct CGRect )arg1 barButtonItem:(id)arg2 ;
-(void)_presentAttachmentsAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 barButtonItem:(id)arg2 forEvent:(id)arg3 ;
-(void)_presentDeleteAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 barButtonItem:(id)arg4 forEvent:(id)arg5 stringForDeleteButton:(id)arg6 ;
-(void)_presentDetachAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 barButtonItem:(id)arg4 forEvent:(id)arg5 ;
-(void)cancelAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)setupDeleteAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 forEvent:(id)arg2 stringForDeleteButton:(id)arg3 ;
-(void)setupUnsubscribeAlertWithOptions:(NSUInteger)arg0 viewController:(id)arg1 ;


@end


#endif