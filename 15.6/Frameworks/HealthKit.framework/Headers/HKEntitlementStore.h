// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKENTITLEMENTSTORE_H
#define HKENTITLEMENTSTORE_H

@class NSString;
@protocol _HKXPCExportable, HKEntitlementStoreClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKEntitlementStore : NSObject <_HKXPCExportable, HKEntitlementStoreClient>

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
-(void)fetchContainerAppExtensionEntitlementsWithCompletion:(id)arg0 ;


@end


#endif