// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAIMAGECONVERSIONSERVICECLIENT_H
#define PAIMAGECONVERSIONSERVICECLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface PAImageConversionServiceClient : NSObject

@property (retain) NSXPCConnection *serviceConnection; // ivar: _serviceConnection


-(id)init;
-(void)convertImageAtSourceURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)convertImageAtSourceURLCollection:(id)arg0 toDestinationURLCollection:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)requestStatusWithCompletionHandler:(id)arg0 ;
-(void)sendRequestWithOptions:(id)arg0 sourceURLCollection:(id)arg1 destinationURLCollection:(id)arg2 jobIdentifier:(id)arg3 attemptCount:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)setupServiceConnection;


@end


#endif