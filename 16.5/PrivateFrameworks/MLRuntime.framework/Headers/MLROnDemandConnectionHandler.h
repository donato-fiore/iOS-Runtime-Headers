// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRONDEMANDCONNECTIONHANDLER_H
#define MLRONDEMANDCONNECTIONHANDLER_H

@class NSString, NSXPCConnection;
@protocol _EXMainConnectionHandler, MLROnDemandRemoteProtocol, MLROnDemandTaskPerforming;

#import <Foundation/Foundation.h>


@interface MLROnDemandConnectionHandler : NSObject <_EXMainConnectionHandler, MLROnDemandRemoteProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MLROnDemandTaskPerforming> *pluginPrincipal; // ivar: _pluginPrincipal
@property (readonly) id *principalObject;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithPrincipalObject:(id)arg0 ;
-(void)performTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)performTaskInternal:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif