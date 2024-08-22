// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _COCAPABILITYMANAGERCONNECTIONPROVIDER_H
#define _COCAPABILITYMANAGERCONNECTIONPROVIDER_H

@class NSXPCConnection, NSString;
@protocol COCapabilityManagerConnectionProvider;

#import <Foundation/Foundation.h>


@interface _COCapabilityManagerConnectionProvider : NSObject <COCapabilityManagerConnectionProvider>



@property (readonly, nonatomic) NSXPCConnection *capabilityManagerServiceConnection; // ivar: _capabilityManagerServiceConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif