// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARREMOTETECHNIQUE_H
#define ARREMOTETECHNIQUE_H

@class NSMutableArray, NSString;
@protocol ARRemoteTechniqueClient, ARServerConnectionDelegate;


#import "ARTechnique.h"
#import "ARServerConnection.h"

@interface ARRemoteTechnique : ARTechnique <ARRemoteTechniqueClient, ARServerConnectionDelegate>

 {
    NSMutableArray *_inflightContexts;
    os_unfair_lock_s _inflightContextsLock;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ARServerConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(CGFloat)requiredTimeInterval;
-(NSInteger)captureBehavior;
-(NSInteger)numberOfActiveConnections;
-(NSUInteger)requiredSensorDataTypes;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithServerConnection:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;
-(id)serviceProxy;
-(void)dealloc;
-(void)prepare:(BOOL)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)serverConnectionInterrupted:(id)arg0 ;
-(void)serverConnectionInvalidated:(id)arg0 ;
-(void)techniqueDidFailWithError:(id)arg0 ;
-(void)techniqueDidOutputResultData:(id)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif