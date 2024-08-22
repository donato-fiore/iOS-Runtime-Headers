// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSERVICELISTENER_H
#define VSSERVICELISTENER_H

@class NSMutableSet, NSString, NSArray, NSXPCInterface;
@protocol VSServiceConnectionHandlerDelegate, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface VSServiceListener : NSObject <VSServiceConnectionHandlerDelegate, NSXPCListenerDelegate>



@property (retain, nonatomic) NSMutableSet *connectionHandlers; // ivar: _connectionHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entitlementNames; // ivar: _entitlementNames
@property (retain, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (retain, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_addConnectionHandler:(id)arg0 ;
-(void)_removeConnectionHandler:(id)arg0 ;
-(void)connectionHandlerDidFinish:(id)arg0 ;


@end


#endif