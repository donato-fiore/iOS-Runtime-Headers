// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTREAMSACCESSREQUEST_H
#define BMSTREAMSACCESSREQUEST_H

@class NSString, NSXPCConnection;
@protocol BMStreamsAccessRequestProtocol;

#import <Foundation/Foundation.h>


@interface BMStreamsAccessRequest : NSObject <BMStreamsAccessRequestProtocol>

 {
    ? _token;
    NSString *_identifier;
    NSXPCConnection *_weakConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_createDirectoryAtPath:(id)arg0 ;
-(BOOL)_hasDirectoryAtPath:(id)arg0 ;
-(BOOL)entitledToAccess:(id)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 identifier:(id)arg1 connection:(id)arg2 ;
-(void)_configureDirectoryForStreamType:(NSUInteger)arg0 ;
-(void)_processRequestForAccess:(id)arg0 reply:(id)arg1 ;
-(void)_processRequestForDSLAccessWithReply:(id)arg0 ;
-(void)requestAccess:(NSUInteger)arg0 streamIdentifier:(id)arg1 streamType:(NSUInteger)arg2 reply:(id)arg3 ;


@end


#endif