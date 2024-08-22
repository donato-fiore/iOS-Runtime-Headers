// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGROUTINGCONTEXTCOMMANDOUTPUTDEVICECONFIGURATIONMODIFICATION_H
#define AVFIGROUTINGCONTEXTCOMMANDOUTPUTDEVICECONFIGURATIONMODIFICATION_H

@class NSString;
@protocol AVOutputDeviceConfigurationModification;

#import <Foundation/Foundation.h>


@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFDictionary routingContextCommandPayload; // ivar: _payload
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(void)addPeerToHomeGroup:(id)arg0 ;
-(void)dealloc;
-(void)removePeerWithIDFromHomeGroup:(id)arg0 ;
-(void)setDeviceName:(id)arg0 ;
-(void)setDevicePassword:(id)arg0 ;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg0 ;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;


@end


#endif