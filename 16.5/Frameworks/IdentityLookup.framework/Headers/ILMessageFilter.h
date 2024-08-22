// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ILMESSAGEFILTER_H
#define ILMESSAGEFILTER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ILMessageFilter : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)performCapabilitiesQueryRequest:(id)arg0 completion:(id)arg1 ;
-(void)performClassificationReportRequest:(id)arg0 completion:(id)arg1 ;
-(void)performQueryRequest:(id)arg0 completion:(id)arg1 ;
-(void)performReportRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif