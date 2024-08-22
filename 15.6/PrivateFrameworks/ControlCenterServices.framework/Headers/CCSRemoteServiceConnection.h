// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCSREMOTESERVICECONNECTION_H
#define CCSREMOTESERVICECONNECTION_H

@class NSXPCConnection, NSString;
@protocol CCSRemoteServiceServerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CCSRemoteServiceConnection : NSObject <CCSRemoteServiceServerProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentModuleWithIdentifier:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(id)arg0 ;
-(void)requestDisableModuleWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestEnableModuleWithIdentifier:(id)arg0 force:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setVisibility:(BOOL)arg0 forModuleWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif