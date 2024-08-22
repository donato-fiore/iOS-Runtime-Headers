// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARTECHNIQUESERVICE_H
#define ARTECHNIQUESERVICE_H

@class NSString;
@protocol ARRemoteTechniqueService, ARTechniqueDelegate, ARRemoteTechniqueClient;


#import "ARDaemonService.h"
#import "ARTechnique.h"

@interface ARTechniqueService : ARDaemonService <ARRemoteTechniqueService, ARTechniqueDelegate>



@property (retain, nonatomic) NSObject<ARRemoteTechniqueClient> *clientProxy; // ivar: _clientProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ARTechnique *technique; // ivar: _technique


+(id)serviceName;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 exportedInterface:(id)arg1 remoteObjectInterface:(id)arg2 ;
-(id)processData:(id)arg0 ;
-(void)_initCommon:(id)arg0 ;
-(void)captureBehaviorWithReply:(id)arg0 ;
-(void)interruptionHandler;
-(void)invalidationHandler;
-(void)isActiveWithReply:(id)arg0 ;
-(void)numberOfActiveConnectionsWithReply:(id)arg0 ;
-(void)prepare:(BOOL)arg0 ;
-(void)processData:(id)arg0 reply:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)requiredSensorDataTypesWithReply:(id)arg0 ;
-(void)requiredTimeIntervalWithReply:(id)arg0 ;
-(void)resultDataClassesWithReply:(id)arg0 ;
-(void)technique:(id)arg0 didFailWithError:(id)arg1 ;
-(void)technique:(id)arg0 didOutputResultData:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 ;


@end


#endif