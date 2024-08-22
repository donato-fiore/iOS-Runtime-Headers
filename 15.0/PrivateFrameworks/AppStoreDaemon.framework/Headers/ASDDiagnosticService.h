// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDDIAGNOSTICSERVICE_H
#define ASDDIAGNOSTICSERVICE_H


#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDDiagnosticService : NSObject {
    ASDServiceBroker *_serviceBroker;
}




+(id)defaultService;
+(id)interface;
-(BOOL)pingWithError:(*id)arg0 ;
-(BOOL)sendCommand:(NSInteger)arg0 withError:(*id)arg1 ;
-(id)_asynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)activeClientsWithError:(*id)arg0 ;
-(id)initWithServiceBroker:(id)arg0 ;
-(id)sendDetailsCommand:(NSInteger)arg0 timeout:(id)arg1 withError:(*id)arg2 ;
-(id)sendDetailsCommand:(NSInteger)arg0 withError:(*id)arg1 ;
-(void)addSubscriberWithEndpoint:(id)arg0 ;


@end


#endif