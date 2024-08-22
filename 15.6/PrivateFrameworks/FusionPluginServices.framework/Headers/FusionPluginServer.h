// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUSIONPLUGINSERVER_H
#define FUSIONPLUGINSERVER_H

@class NSXPCConnection, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, FusionPluginServerInterface;

#import <Foundation/Foundation.h>


@interface FusionPluginServer : NSObject <NSXPCListenerDelegate>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<FusionPluginServerInterface> *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) Class principalClass; // ivar: _principalClass
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithClass:(Class)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(void)resume;


@end


#endif