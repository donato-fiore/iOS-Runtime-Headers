// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCPLUGINCLIENT_H
#define FCCPLUGINCLIENT_H

@class HKTaskServerProxyProvider, NSString;
@protocol _HKXPCExportable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCCPluginClient : NSObject <_HKXPCExportable>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_pluginMessage:(NSUInteger)arg0 data:(id)arg1 completionHandler:(id)arg2 ;
// -(void)_remoteProxy:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)pluginMessage:(NSUInteger)arg0 data:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif