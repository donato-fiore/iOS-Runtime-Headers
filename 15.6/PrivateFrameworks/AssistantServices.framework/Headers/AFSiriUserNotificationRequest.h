// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSIRIUSERNOTIFICATIONREQUEST_H
#define AFSIRIUSERNOTIFICATIONREQUEST_H

@class UNNotification, NSString;
@protocol AFSiriExternalRequest;

#import <Foundation/Foundation.h>


@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest>

 {
    UNNotification *_notification;
    NSString *_sourceAppId;
    NSInteger _platform;
}




+(BOOL)canBeHandled;
+(BOOL)supportedForApplicationWithBundleId:(id)arg0 ;
+(BOOL)supportedOnPlatform;
-(id)initWithUserNotification:(id)arg0 sourceAppId:(id)arg1 ;
-(id)initWithUserNotification:(id)arg0 sourceAppId:(id)arg1 platform:(NSInteger)arg2 ;
-(void)deactivateRequestForReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)performRequestWithCompletion:(id)arg0 ;
-(void)withdrawalRequestWithCompletion:(id)arg0 ;


@end


#endif