// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTDEVICEMANAGERXPCDISCOVERYREQUESTER_H
#define HMDRESIDENTDEVICEMANAGERXPCDISCOVERYREQUESTER_H

@class NSString;
@protocol HMDResidentDeviceManagerDiscoveryRequester;

#import <Foundation/Foundation.h>


@interface HMDResidentDeviceManagerXPCDiscoveryRequester : NSObject <HMDResidentDeviceManagerDiscoveryRequester>



@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)residentDeviceManager:(id)arg0 didCompleteDiscoveryWithPrimaryResidentDevice:(id)arg1 error:(id)arg2 ;


@end


#endif