// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIASDDIALOGOBSERVER_H
#define VUIASDDIALOGOBSERVER_H

@class NSString, UIViewController;
@protocol ASDNotificationCenterDialogObserver;

#import <Foundation/Foundation.h>


@interface VUIASDDialogObserver : NSObject <ASDNotificationCenterDialogObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presenterViewController; // ivar: _presenterViewController
@property (readonly) Class superclass;


-(void)handleAuthenticateRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)startListening;
-(void)stopListening;


@end


#endif