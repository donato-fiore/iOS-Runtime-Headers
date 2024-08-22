// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGSERVICELISTENERPROVIDER_H
#define MGSERVICELISTENERPROVIDER_H

@class NSString;
@protocol MGServiceListenerProviderProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MGServiceListenerProvider : NSObject <MGServiceListenerProviderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, copy, nonatomic) NSString *entitlement; // ivar: _entitlement
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(BOOL)serviceShouldAcceptNewConnection:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 entitlement:(id)arg1 ;
-(id)serviceListener;


@end


#endif