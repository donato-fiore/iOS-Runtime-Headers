// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTCLIENTREQUEST_H
#define KTCLIENTREQUEST_H

@class NSData, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface KTClientRequest : NSObject

@property (retain) NSData *accountID; // ivar: _accountID
@property (retain) NSData *accountKey; // ivar: _accountKey
@property (retain) NSString *application; // ivar: _application
@property (retain) NSArray *clientLoggableDatas; // ivar: _clientLoggableDatas
@property (retain) NSData *queryRequest; // ivar: _queryRequest
@property (retain) NSData *queryResponse; // ivar: _queryResponse
@property (retain) NSArray *serverLoggableDatas; // ivar: _serverLoggableDatas
@property NSUInteger type; // ivar: _type
@property (retain) NSString *uri; // ivar: _uri


-(id)addValidateRequest:(id)arg0 dataStore:(id)arg1 error:(*id)arg2 ;
-(id)initWithType:(NSUInteger)arg0 application:(id)arg1 uri:(id)arg2 accountID:(id)arg3 accountKey:(id)arg4 serverLoggableDatas:(id)arg5 ;


@end


#endif