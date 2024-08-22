// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICSERVICE_H
#define DKDIAGNOSTICSERVICE_H

@class NSMutableArray, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface DKDiagnosticService : NSObject <NSXPCListenerDelegate>



@property (retain, nonatomic) NSMutableArray *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) Class principalClass; // ivar: _principalClass
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)resume;


@end


#endif