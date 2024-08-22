// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSDEVELOPERIDENTITYPROVIDERCHANGEOPERATION_H
#define VSDEVELOPERIDENTITYPROVIDERCHANGEOPERATION_H

@class NSXPCConnection;


#import "VSAsyncOperation.h"
#import "VSIdentityProvider.h"
#import "VSOptional.h"

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation

@property (nonatomic) NSInteger changeKind; // ivar: _changeKind
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)_serviceWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)executionDidBegin;


@end


#endif