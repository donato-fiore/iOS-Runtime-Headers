// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV13MATTERSUPPORT22MATTERADDDEVICEREQUEST7WRAPPER_H
#define _TTCV13MATTERSUPPORT22MATTERADDDEVICEREQUEST7WRAPPER_H

@class NSString, NSData, MTRSetupPayload;
@protocol MTDeviceSetupRequestSwiftWrapper;

#import <Foundation/Foundation.h>

#import "MTSDeviceSetupTopology.h"

@interface _TtCV13MatterSupport22MatterAddDeviceRequest7Wrapper : NSObject <MTDeviceSetupRequestSwiftWrapper>

 {
    ? wrappedRequest;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *ecosystemName;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSData *serializedAsData;
@property (nonatomic, readonly) MTRSetupPayload *setupPayload;
@property (nonatomic, readonly) BOOL shouldScanNetworks;
@property (nonatomic, readonly) MTSDeviceSetupTopology *topology;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldShowDeviceWithUUID:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 serialNumber:(id)arg3 rootPublicKey:(id)arg4 nodeID:(id)arg5 ;
-(id)init;


@end


#endif