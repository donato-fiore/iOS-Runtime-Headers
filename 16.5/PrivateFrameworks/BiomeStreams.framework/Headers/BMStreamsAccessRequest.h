// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMSACCESSREQUEST_H
#define BMSTREAMSACCESSREQUEST_H

@class BMFileServer, NSString, NSXPCListener, BMAccessControlPolicy;
@protocol BMStreamsAccessRequestProtocol;

#import <Foundation/Foundation.h>


@interface BMStreamsAccessRequest : NSObject <BMStreamsAccessRequestProtocol>

 {
    NSUInteger _domain;
    BMFileServer *_fileServer;
    NSString *_applicationIdentifier;
}


@property (weak, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) BMAccessControlPolicy *policy; // ivar: _policy


-(BOOL)_createDirectoryAtPath:(id)arg0 ;
-(BOOL)_hasDirectoryAtPath:(id)arg0 ;
-(id)applicationIdentifier;
-(id)connection;
-(id)initWithDomain:(NSUInteger)arg0 ;
-(void)_configureDirectoryForStreamType:(NSUInteger)arg0 ;
-(void)_processRequestForAccess:(id)arg0 reply:(id)arg1 ;
-(void)createDirectoryAtPath:(id)arg0 reply:(id)arg1 ;
-(void)fileHandleForFileAtPath:(id)arg0 flags:(int)arg1 protection:(int)arg2 reply:(id)arg3 ;
-(void)removeDirectoryAtPath:(id)arg0 reply:(id)arg1 ;
-(void)removeFileAtPath:(id)arg0 reply:(id)arg1 ;
-(void)replaceFileAtPath:(id)arg0 withFileHandle:(id)arg1 reply:(id)arg2 ;
-(void)requestAccess:(NSUInteger)arg0 streamIdentifier:(id)arg1 streamType:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)requestAccessToFlexibleStorageWithReply:(id)arg0 ;
-(void)requestBiomeEndpoint:(BOOL)arg0 reply:(id)arg1 ;
-(void)sharedMemoryForFileAtPath:(id)arg0 flags:(int)arg1 reply:(id)arg2 ;
-(void)temporaryFileHandleWithProtection:(int)arg0 reply:(id)arg1 ;


@end


#endif