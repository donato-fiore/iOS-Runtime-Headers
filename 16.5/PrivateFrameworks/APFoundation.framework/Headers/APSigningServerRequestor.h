// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSIGNINGSERVERREQUESTOR_H
#define APSIGNINGSERVERREQUESTOR_H

@class NSURLSession;

#import <Foundation/Foundation.h>


@interface APSigningServerRequestor : NSObject

@property (nonatomic) NSUInteger serverRequestorId; // ivar: _serverRequestorId
@property (retain, nonatomic) NSURLSession *session; // ivar: _session


-(BOOL)_retrieveResponse:(**void)arg0 andLength:(*unsigned int)arg1 fromData:(id)arg2 error:(*id)arg3 ;
-(id)deviceModel;
-(id)init;
-(id)systemNameAndVersion;
-(id)userAgentString;
-(void)sendRequest:(id)arg0 requestType:(NSInteger)arg1 numRetry:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)sendRequestForData:(id)arg0 requestType:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif