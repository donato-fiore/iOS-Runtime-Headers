// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDREPAIRSERVICE_H
#define ASDREPAIRSERVICE_H


#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDRepairService : NSObject {
    ASDServiceBroker *_serviceBroker;
}




+(id)defaultService;
+(id)interface;
-(BOOL)isCoastGuardUnrepairableAppWithItemID:(NSUInteger)arg0 externalVersionID:(NSUInteger)arg1 ;
-(id)_asynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)initWithServiceBroker:(id)arg0 ;
-(void)_callRepairServiceWithOptions:(id)arg0 replyHandler:(id)arg1 ;
-(void)refreshKeybagWithReplyHandler:(id)arg0 ;
-(void)repairAppWithOptions:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif