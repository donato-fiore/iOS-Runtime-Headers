// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTEXPIREDPIDCACHESERVICE_H
#define DTEXPIREDPIDCACHESERVICE_H



#import "XRExpiredPidCacheServiceProtected.h"

@interface DTExpiredPidCacheService : XRExpiredPidCacheServiceProtected



+(id)defaultCache;
+(void)disableExpiredPidCaching;
-(id)allExpiredSignatures;
-(id)init;
-(id)signatureForExpiredPid:(id)arg0 ;
-(void)dealloc;
-(void)enableCaching:(BOOL)arg0 ;


@end


#endif