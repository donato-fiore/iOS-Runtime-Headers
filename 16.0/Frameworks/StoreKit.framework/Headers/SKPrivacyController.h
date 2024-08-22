// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPRIVACYCONTROLLER_H
#define SKPRIVACYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SKPrivacyController : NSObject



+(NSInteger)_authorizationStatusFromUnderlyingAuthorizationStatus:(NSInteger)arg0 ;
+(NSInteger)authorizationStatus;
+(id)_sharedCloudServiceStatusMonitor;
+(void)requestAuthorization:(id)arg0 ;


@end


#endif