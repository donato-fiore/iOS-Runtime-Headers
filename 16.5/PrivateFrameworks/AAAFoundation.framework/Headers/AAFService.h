// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAFSERVICE_H
#define AAFSERVICE_H

@class NSString, Protocol, NSArray, NSXPCListener;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface AAFService : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly, nonatomic) Protocol *exportedProtocol; // ivar: _exportedProtocol
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *preConnectEntitlements; // ivar: _preConnectEntitlements
@property (retain, nonatomic) NSXPCListener *serviceListener; // ivar: _serviceListener
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg0 ;
-(id)init;
-(void)_configureListener;
-(void)configureExportedInterface:(id)arg0 ;
-(void)startup;


@end


#endif