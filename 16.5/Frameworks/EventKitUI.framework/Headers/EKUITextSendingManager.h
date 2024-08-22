// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUITEXTSENDINGMANAGER_H
#define EKUITEXTSENDINGMANAGER_H

@class MFMessageComposeViewController, NSString, UIViewController;
@protocol MFMessageComposeViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface EKUITextSendingManager : NSObject <MFMessageComposeViewControllerDelegate>

 {
    MFMessageComposeViewController *_composeViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *messageSendingComplete; // ivar: _messageSendingComplete
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController;


+(BOOL)canSendMessageToRecipientsOnEvent:(id)arg0 ;
+(BOOL)messagingAvailable;
+(id)addressesForRecipientsOnEvent:(id)arg0 ;
+(void)getPhone:(*id)arg0 andEmail:(*id)arg1 forContact:(id)arg2 ;
-(id)initWithEvent:(id)arg0 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)setupControllerWithAddresses:(id)arg0 ;


@end


#endif