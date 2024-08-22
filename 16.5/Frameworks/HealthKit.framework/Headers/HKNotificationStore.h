// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKNOTIFICATIONSTORE_H
#define HKNOTIFICATIONSTORE_H

@class NSString;
@protocol _HKXPCExportable, HKNotificationStoreClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKNotificationStore : NSObject <_HKXPCExportable, HKNotificationStoreClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchBadgeForDomain:(NSInteger)arg0 completion:(id)arg1 ;
-(void)postCompanionUserNotificationOfType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)postNotificationWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)setBadge:(id)arg0 forDomain:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif