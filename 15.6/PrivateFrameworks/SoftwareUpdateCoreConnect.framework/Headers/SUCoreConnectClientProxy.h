// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORECONNECTCLIENTPROXY_H
#define SUCORECONNECTCLIENTPROXY_H

@class NSString;
@protocol NSSecureCoding, SUCoreConnectClientProxyProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreConnectClientProxy : NSObject <NSSecureCoding, SUCoreConnectClientProxyProtocol>



@property (readonly, retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithClientID:(id)arg0 completionQueue:(id)arg1 progressBlock:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeProgressBlock:(id)arg0 ;


@end


#endif