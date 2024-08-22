// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABDOCUMENTDROPHANDLER_H
#define TABDOCUMENTDROPHANDLER_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface TabDocumentDropHandler : NSObject

@property (weak, nonatomic) UIViewController *alertPresentationViewController; // ivar: _alertPresentationViewController
@property (readonly, nonatomic) NSUInteger maximumNumberOfTabs; // ivar: _maximumNumberOfTabs


+(BOOL)canHandleSession:(id)arg0 ;
+(BOOL)canPinAllItemsInSession:(id)arg0 ;
+(NSUInteger)proposedOperationForSession:(id)arg0 intoWindowWithPrivateBrowsingEnabled:(BOOL)arg1 ;
+(id)tabDocumentsForDragItems:(id)arg0 ;
-(NSUInteger)_minimumNumberOfNewTabsRequiringConfirmation;
-(id)init;
-(id)initWithAlertPresentationViewController:(id)arg0 ;
-(id)initWithMaximumNumberOfTabs:(NSUInteger)arg0 alertPresentationViewController:(id)arg1 ;
// -(void)dropItemsForSession:(id)arg0 withOperation:(NSUInteger)arg1 restorationHandler:(id)arg2 insertionHandler:(unk)arg3  ;
// -(void)dropItemsForSession:(id)arg0 withOperation:(NSUInteger)arg1 restorationHandler:(id)arg2 insertionHandler:(unk)arg3 completionHandler:(id)arg4  ;
-(void)promptIfNeededToConfirmNumberOfNavigationIntents:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif