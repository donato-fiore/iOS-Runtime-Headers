// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYCIRCLEREQUEST_H
#define FAFAMILYCIRCLEREQUEST_H

@class NSString;
@protocol FAFamilyCircleRequestConnectionProvider;

#import <Foundation/Foundation.h>


@interface FAFamilyCircleRequest : NSObject

@property (retain, nonatomic) NSObject<FAFamilyCircleRequestConnectionProvider> *connectionProvider; // ivar: _connectionProvider
@property (copy) NSString *passwordOrToken; // ivar: _passwordOrToken
@property (copy) NSString *usernameOrDSID; // ivar: _usernameOrDSID


-(id)init;
-(id)initWithConnectionProvider:(id)arg0 ;
-(id)requestOptions;
-(id)serviceConnection;
-(id)serviceRemoteObjectWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectWithErrorHandler:(id)arg0 ;


@end


#endif