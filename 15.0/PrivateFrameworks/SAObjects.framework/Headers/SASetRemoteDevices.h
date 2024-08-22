// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETREMOTEDEVICES_H
#define SASETREMOTEDEVICES_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASetRemoteDevices : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (nonatomic) BOOL remoteDeviceHasNoAssistantId;
@property (nonatomic) BOOL remoteDeviceNotSetup;
@property (nonatomic) BOOL remoteDeviceUnreachable;
@property (copy, nonatomic) NSArray *remoteDevices;
@property (readonly) Class superclass;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif