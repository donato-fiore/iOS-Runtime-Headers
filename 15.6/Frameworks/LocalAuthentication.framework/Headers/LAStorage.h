// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LASTORAGE_H
#define LASTORAGE_H

@class NSXPCConnection;
@protocol LASecureStorageService;

#import <Foundation/Foundation.h>

#import "LAContext.h"

@interface LAStorage : NSObject

@property (readonly, nonatomic) LAContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSInteger domain; // ivar: _domain
@property (readonly, nonatomic) unsigned int instanceId; // ivar: _instanceId
@property (readonly, nonatomic) NSObject<LASecureStorageService> *remoteObjectProxy; // ivar: _remoteObjectProxy


+(id)objectDescription:(id)arg0 ;
+(unsigned int)newInstanceId;
-(BOOL)boolForKey:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setBool:(BOOL)arg0 forKey:(NSInteger)arg1 error:(*id)arg2 ;
-(NSInteger)_authenticationPolicyForKey:(NSInteger)arg0 selector:(SEL)arg1 ;
-(id)description;
-(id)initWithDomain:(NSInteger)arg0 authenticationContext:(id)arg1 ;
-(void)_bootstrapServiceType:(id)arg0 completionHandler:(id)arg1 ;
// -(void)_bootstrapServiceWithAuthenticationPolicy:(NSInteger)arg0 proxyBlock:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)_callProxyBlock:(id)arg0 authenticationPolicy:(unk)arg1 completionHandler:(NSInteger)arg2  ;
-(void)_connectToEndpoint:(id)arg0 ;
-(void)boolForKey:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)objectForKey:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeObjectForKey:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)setObject:(id)arg0 forKey:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif