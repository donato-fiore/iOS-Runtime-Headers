// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPXPCCONNECTION_H
#define CPXPCCONNECTION_H

@class NSString, NSXPCConnection;
@protocol CPXPCConnection;

#import <Foundation/Foundation.h>


@interface CPXPCConnection : NSObject <CPXPCConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSXPCConnection *searchConnection; // ivar: _searchConnection
@property (readonly) Class superclass;


+(id)log;
-(id)init;
-(id)searchServiceProxyWithErrorHandler:(id)arg0 ;


@end


#endif