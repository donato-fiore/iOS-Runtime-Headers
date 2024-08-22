// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTELOGINUTILITIES_H
#define HMDREMOTELOGINUTILITIES_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDRemoteLoginUtilities : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)serviceTypeForAccountService:(NSUInteger)arg0 ;
+(id)logCategory;
+(id)primaryITunesAccount;
+(void)fetchIsTwoFactorAuthenticationEnabledForAccountWithReason:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif