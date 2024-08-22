// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HSCONNECTION_H
#define HSCONNECTION_H

@class NSURLSession, NSURL, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HSFairPlayInfo.h"

@interface HSConnection : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_activityTimerSource;
    NSURLSession *_connectionSession;
}


@property (nonatomic) unsigned int basePlaylistContainerID; // ivar: _basePlaylistContainerID
@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (readonly, nonatomic) NSInteger connectionType; // ivar: _connectionType
@property (nonatomic) unsigned int databaseID; // ivar: _databaseID
@property (nonatomic) unsigned int databaseRevision; // ivar: _databaseRevision
@property (retain, nonatomic) HSFairPlayInfo *fairPlayInfo; // ivar: _fairPlayInfo
@property (copy, nonatomic) NSString *homeSharingGroupID; // ivar: _homeSharingGroupID
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID


-(id)_onSerialQueue_connectionSession;
-(id)initWithBaseURL:(id)arg0 ;
-(id)initWithBaseURL:(id)arg0 connectionType:(NSInteger)arg1 ;
-(id)signedRequestFromURLRequest:(id)arg0 ;
-(unsigned int)_sapVersionForConnectionType;
-(void)_continueFPSetupNegotiationWithData:(id)arg0 internalConnectionCompletionHandler:(id)arg1 ;
-(void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg0 ;
-(void)_onSerialQueue_sendRequest:(id)arg0 withInternalResponseHandler:(id)arg1 ;
-(void)_sendRequest:(id)arg0 withInternalResponseHandler:(id)arg1 ;
-(void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg0 ;
-(void)connectWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)sendRequest:(id)arg0 withResponseHandler:(id)arg1 ;


@end


#endif