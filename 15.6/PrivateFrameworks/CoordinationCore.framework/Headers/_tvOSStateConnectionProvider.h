// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVOSSTATECONNECTIONPROVIDER_H
#define _TVOSSTATECONNECTIONPROVIDER_H

@class NSString, NSXPCConnection;
@protocol COStateManagerConnectionProvider, COServiceListenerProvider;

#import <Foundation/Foundation.h>


@interface _tvOSStateConnectionProvider : NSObject <COStateManagerConnectionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<COServiceListenerProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) NSXPCConnection *stateManagerServiceConnection; // ivar: _stateManagerServiceConnection
@property (readonly) Class superclass;


-(id)initWithListenerProvider:(id)arg0 ;


@end


#endif