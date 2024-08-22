// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMMULTIPLEXEDDAEMONCONNECTION_H
#define IMMULTIPLEXEDDAEMONCONNECTION_H

@class NSDictionary, NSString;
@protocol IMDaemonMultiplexedConnectionManaging, IMDaemonProtocol;

#import <Foundation/Foundation.h>


@interface IMMultiplexedDaemonConnection : NSObject <IMDaemonMultiplexedConnectionManaging>

 {
    ? label;
    ? context;
    ? onInvalidate;
    ? onDeinit;
}


@property (nonatomic, readonly) NSUInteger capabilities; // ivar: capabilities
@property (nonatomic, readonly) NSDictionary *context;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSObject<IMDaemonProtocol> *remoteProxy;
@property (nonatomic, readonly) NSObject<IMDaemonProtocol> *synchronousRemoteProxy;


-(id)init;
// -(id)initWithLabel:(id)arg0 capabilities:(NSUInteger)arg1 context:(id)arg2 onInvalidate:(id)arg3 onDealloc:(unk)arg4  ;
-(void)connectWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)waitForSetup;


@end


#endif