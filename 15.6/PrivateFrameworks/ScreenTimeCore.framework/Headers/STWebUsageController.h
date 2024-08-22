// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STWEBUSAGECONTROLLER_H
#define STWEBUSAGECONTROLLER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STWebUsageController : NSObject

@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)init;
-(void)_asynchronousProxyWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllWebHistoryForApplication:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteWebHistoryDuringInterval:(id)arg0 application:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteWebHistoryForDomain:(id)arg0 application:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteWebHistoryForURL:(id)arg0 application:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif