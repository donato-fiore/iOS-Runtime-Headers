// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWURLLOADERTCP_H
#define NWURLLOADERTCP_H

@class NSString, NSMutableArray;
@protocol NWURLLoader, NWURLLoaderClient, OS_dispatch_queue, OS_nw_connection;

#import <Foundation/Foundation.h>

#import "NWURLSessionTaskConfiguration.h"

@interface NWURLLoaderTCP : NSObject <NWURLLoader>

 {
    BOOL _ready;
    BOOL _TLS;
    BOOL _addedTLS;
    NSString *_hostname;
    NSInteger _port;
    NWURLSessionTaskConfiguration *_configuration;
    id<NWURLLoaderClient> *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingWork;
    NSObject<OS_nw_connection> *_connection;
}


@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;


-(void)readDataOfMinimumIncompleteLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)readResponse:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateClient:(id)arg0 ;
-(void)writeData:(id)arg0 complete:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif