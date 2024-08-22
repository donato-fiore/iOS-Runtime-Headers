// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERSERVICEPROXY_H
#define WBSCYCLERSERVICEPROXY_H

@class NSXPCConnection;
@protocol WBSCyclerServiceProtocol;

#import <Foundation/Foundation.h>


@interface WBSCyclerServiceProxy : NSObject <WBSCyclerServiceProtocol>

 {
    NSXPCConnection *_xpcConnection;
}


@property (copy, nonatomic) id *connectionInvalidationHandler;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler


-(id)_cyclerProxy;
-(id)init;
-(void)dealloc;
-(void)fetchLogsWithReply:(id)arg0 ;
-(void)fetchStatusWithReply:(id)arg0 ;
-(void)sendRequestToTestSuite:(id)arg0 reply:(id)arg1 ;
-(void)setTestTargetEndpoint:(id)arg0 reply:(id)arg1 ;
-(void)setValue:(id)arg0 forConfigurationKey:(id)arg1 reply:(id)arg2 ;
-(void)startCyclingFromBeginning:(BOOL)arg0 reply:(id)arg1 ;
-(void)stopCyclingWithReply:(id)arg0 ;


@end


#endif