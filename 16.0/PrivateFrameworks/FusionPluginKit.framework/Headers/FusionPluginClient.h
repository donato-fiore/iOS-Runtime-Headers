// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FUSIONPLUGINCLIENT_H
#define FUSIONPLUGINCLIENT_H

@class NSString, NSXPCConnection;
@protocol FusionPluginClientInterface;

#import <Foundation/Foundation.h>


@interface FusionPluginClient : NSObject <FusionPluginClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initClientConnection:(id)arg0 ;
-(void)sendMessage:(id)arg0 response:(*id)arg1 ;


@end


#endif