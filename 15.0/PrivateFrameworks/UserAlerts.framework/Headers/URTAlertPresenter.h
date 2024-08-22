// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef URTALERTPRESENTER_H
#define URTALERTPRESENTER_H

@class NSString, NSMutableDictionary;
@protocol URTDestinationPresentationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "URTUserNotificationPresentation.h"

@interface URTAlertPresenter : NSObject <URTDestinationPresentationDelegate>



@property (nonatomic) *unk compatibilityCallback; // ivar: _compatibilityCallback
@property (readonly, nonatomic) int compatibilityResponse; // ivar: _compatibilityResponse
@property (readonly, nonatomic) int compatibilityResponseButtonFlag; // ivar: _compatibilityResponseButtonFlag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *presentationsForDestinations; // ivar: _presentationsForDestinations
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presentationsQueue; // ivar: _presentationsQueue
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) URTUserNotificationPresentation *userNotificationPresentation; // ivar: _userNotificationPresentation


-(id)init;
-(void)_addUserNotificationContents:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)_handleUserNotificationResponse:(NSUInteger)arg0 ;
-(void)_invokeCallbackForResponseFlags:(NSUInteger)arg0 ;
-(void)_presentationQueue_dismiss;
-(void)_presentationQueue_invalidate;
-(void)_presentationQueue_invokeAction:(id)arg0 forPresentation:(id)arg1 ;
-(void)_presentationQueue_removePresentation:(id)arg0 forDestination:(NSInteger)arg1 ;
-(void)addAlert:(id)arg0 forDestination:(NSInteger)arg1 ;
-(void)dismiss;
-(void)handleCancelActionForAlertPresentation:(id)arg0 ;
-(void)handleDefaultActionForAlertPresentation:(id)arg0 ;
-(void)handleOtherActionForAlertPresentation:(id)arg0 ;
-(void)invalidate;
-(void)present;


@end


#endif