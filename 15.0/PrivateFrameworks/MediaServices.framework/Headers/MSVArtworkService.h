// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVARTWORKSERVICE_H
#define MSVARTWORKSERVICE_H

@class NSXPCConnection, NSOperationQueue;

#import <Foundation/Foundation.h>


@interface MSVArtworkService : NSObject

@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue; // ivar: _serviceThrottlingOperationQueue


+(id)sharedService;
-(id)init;
-(void)dealloc;
-(void)sendRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif