// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDEVICESTORE_H
#define HKDEVICESTORE_H

@class NSString;
@protocol _HKXPCExportable, HKDeviceStoreClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKDeviceStore : NSObject <_HKXPCExportable, HKDeviceStoreClient>

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
-(void)fetchAllDevicesWithCompletion:(id)arg0 ;
-(void)fetchDevicesMatchingValues:(id)arg0 forProperty:(id)arg1 completion:(id)arg2 ;


@end


#endif