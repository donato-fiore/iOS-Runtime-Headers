// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUSERALERTNOTIFICATIONSOURCE_H
#define SBUSERALERTNOTIFICATIONSOURCE_H

@class NSString, NCNotificationDispatcher;
@protocol SBAlertItemsControllerObserver, NCNotificationSource, SBAlertItemPresenter;

#import <Foundation/Foundation.h>


@interface SBUserAlertNotificationSource : NSObject <SBAlertItemsControllerObserver, NCNotificationSource, SBAlertItemPresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(BOOL)presentsAlertItemsModally;
-(id)initWithDispatcher:(id)arg0 ;
-(void)alertItemsController:(id)arg0 didActivateAlertItem:(id)arg1 ;
-(void)alertItemsController:(id)arg0 didDeactivateAlertItem:(id)arg1 forReason:(int)arg2 ;
-(void)alertItemsController:(id)arg0 willActivateAlertItem:(id)arg1 ;
-(void)dealloc;
-(void)dismissAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif