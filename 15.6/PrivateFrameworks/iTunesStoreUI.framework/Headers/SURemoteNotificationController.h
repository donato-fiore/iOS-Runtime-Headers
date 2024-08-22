// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUREMOTENOTIFICATIONCONTROLLER_H
#define SUREMOTENOTIFICATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SURemoteNotificationController : NSObject

@property (readonly, nonatomic) NSUInteger enabledNotificationTypes;


+(id)sharedInstance;
-(id)init;
-(void)handleNotificationDictionary:(id)arg0 ;
-(void)handleRegistrationFailureWithError:(id)arg0 ;
-(void)handleRegistrationSuccessWithToken:(id)arg0 ;


@end


#endif