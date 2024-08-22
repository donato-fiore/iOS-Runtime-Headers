// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEACCOUNTHANDLEMESSAGEDESTINATION_H
#define HMDREMOTEACCOUNTHANDLEMESSAGEDESTINATION_H

@class NSDictionary;


#import "HMDRemoteMessageDestination.h"
#import "HMDAccountHandle.h"

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) NSDictionary *deviceCapabilities; // ivar: _deviceCapabilities
@property (readonly, copy) HMDAccountHandle *handle; // ivar: _handle
@property (readonly, getter=isMulticast) BOOL multicast; // ivar: _multicast
@property BOOL restrictToResidentCapable; // ivar: _restrictToResidentCapable


+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 handle:(id)arg1 multicast:(BOOL)arg2 ;
-(id)initWithTarget:(id)arg0 handle:(id)arg1 multicast:(BOOL)arg2 deviceCapabilities:(id)arg3 ;
-(id)privateDescription;
-(id)remoteDestinationString;
-(id)shortDescription;


@end


#endif