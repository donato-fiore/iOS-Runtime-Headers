// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HSHOMESHARINGLIBRARY_H
#define HSHOMESHARINGLIBRARY_H

@class NSURL, NSString, NSNetService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HSConnection.h"

@interface HSHomeSharingLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
}


@property (nonatomic) BOOL _hasPendingUpdateRequest; // ivar: __hasPendingUpdateRequest
@property (readonly, nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, nonatomic) unsigned int basePlaylistContainerID;
@property (readonly, retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) HSConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSInteger connectionState;
@property (readonly, nonatomic) NSInteger connectionType; // ivar: _connectionType
@property (readonly, nonatomic) unsigned int databaseID;
@property (readonly, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID; // ivar: _homeSharingGroupID
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL requiresPassword; // ivar: _requiresPassword
@property (retain, nonatomic) NSNetService *service; // ivar: _service
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithName:(id)arg0 uniqueIdentifier:(id)arg1 version:(unsigned int)arg2 baseURL:(id)arg3 homeSharingGroupID:(id)arg4 connectionType:(NSInteger)arg5 ;
-(id)securityInfoForURL:(id)arg0 ;
-(id)signedRequestFromURLRequest:(id)arg0 ;
-(id)urlForRequest:(id)arg0 ;
-(void)_onQueue_ensureConnection;
-(void)_sendUpdateRequest;
-(void)connectWithCompletionHandler:(id)arg0 ;
-(void)disconnect;
-(void)sendRequest:(id)arg0 withResponseHandler:(id)arg1 ;


@end


#endif