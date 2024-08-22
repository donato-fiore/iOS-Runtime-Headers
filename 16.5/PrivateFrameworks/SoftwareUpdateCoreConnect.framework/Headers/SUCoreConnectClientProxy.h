// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCORECONNECTCLIENTPROXY_H
#define SUCORECONNECTCLIENTPROXY_H

@class NSString;
@protocol NSSecureCoding, SUCoreConnectClientProxyProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreConnectClientProxy : NSObject <NSSecureCoding, SUCoreConnectClientProxyProtocol>



@property (readonly, retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, retain, nonatomic) NSString *clientIDRaw; // ivar: _clientIDRaw
@property (readonly, nonatomic) int clientProcessIdentifier; // ivar: _clientProcessIdentifier
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *genericBlock; // ivar: _genericBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithClientID:(id)arg0 completionQueue:(id)arg1 genericBlock:(id)arg2 ;
// -(id)initWithClientID:(id)arg0 completionQueue:(id)arg1 genericBlock:(id)arg2 progressBlock:(unk)arg3  ;
-(id)initWithClientID:(id)arg0 completionQueue:(id)arg1 progressBlock:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeGenericBlock:(id)arg0 ;
-(void)executeGenericBlock:(id)arg0 disableVerboseLogging:(BOOL)arg1 ;
-(void)executeProgressBlock:(id)arg0 ;
-(void)executeProgressBlock:(id)arg0 disableVerboseLogging:(BOOL)arg1 ;


@end


#endif