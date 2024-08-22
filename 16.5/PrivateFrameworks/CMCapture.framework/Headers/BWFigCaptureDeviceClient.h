// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWFIGCAPTUREDEVICECLIENT_H
#define BWFIGCAPTUREDEVICECLIENT_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (readonly, nonatomic) BOOL canStealFromClientsWithSamePriority; // ivar: _canStealFromClientsWithSamePriority
@property (readonly, nonatomic) NSString *clientDescription; // ivar: _clientDescription
@property (readonly, nonatomic) int clientID; // ivar: _clientID
@property (readonly, nonatomic) int clientPriority; // ivar: _clientPriority
@property (copy, nonatomic) id *deviceAvailabilityChangedHandler; // ivar: _deviceAvailabilityChangedHandler
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed; // ivar: _deviceSharingWithOtherClientsAllowed
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) NSMutableArray *portTypesAllowingStreamControlLoss; // ivar: _portTypesAllowingStreamControlLoss


-(BOOL)canShareDeviceWithClientPID:(int)arg0 deviceAvailabilityChangedHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithPID:(int)arg0 clientApplicationID:(id)arg1 clientDescription:(id)arg2 clientPriority:(int)arg3 canStealFromClientsWithSamePriority:(BOOL)arg4 deviceSharingWithOtherClientsAllowed:(BOOL)arg5 deviceAvailabilityChangedHandler:(id)arg6 ;
-(void)dealloc;


@end


#endif