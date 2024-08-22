// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWFIGCAPTUREDEVICECLIENT_H
#define BWFIGCAPTUREDEVICECLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) BOOL canStealFromClientsWithSamePriority; // ivar: _canStealFromClientsWithSamePriority
@property (readonly, nonatomic) NSString *clientDescription; // ivar: _clientDescription
@property (readonly, nonatomic) int clientID; // ivar: _clientID
@property (readonly, nonatomic) int clientPriority; // ivar: _clientPriority
@property (copy, nonatomic) id *deviceAvailabilityChangedHandler; // ivar: _deviceAvailabilityChangedHandler
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed; // ivar: _deviceSharingWithOtherClientsAllowed
@property (readonly, nonatomic) int pid; // ivar: _pid


-(BOOL)canShareDeviceWithClientPID:(int)arg0 deviceAvailabilityChangedHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithPID:(int)arg0 clientDescription:(id)arg1 clientPriority:(int)arg2 canStealFromClientsWithSamePriority:(BOOL)arg3 deviceSharingWithOtherClientsAllowed:(BOOL)arg4 deviceAvailabilityChangedHandler:(id)arg5 ;
-(void)dealloc;


@end


#endif