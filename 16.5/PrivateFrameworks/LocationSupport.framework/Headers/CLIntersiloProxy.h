// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLINTERSILOPROXY_H
#define CLINTERSILOPROXY_H

@class NSProxy;
@protocol CLIntersiloProxyDelegateProtocol;


#import "CLSilo.h"

@interface CLIntersiloProxy : NSProxy

@property (readonly, weak, nonatomic) NSObject<CLIntersiloProxyDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) CLSilo *delegateSilo; // ivar: _delegateSilo


+(Class)initiatorRepresentingClass;
+(Class)recipientRepresentingClass;
+(id)proxyForRecipientObject:(id)arg0 inSilo:(id)arg1 recipientName:(id)arg2 ;
-(BOOL)offsiloHandleInvocation:(id)arg0 selectorInfo:(id)arg1 peer:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithDelegateObject:(id)arg0 delegateSilo:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)peer;
-(void)forwardInvocation:(id)arg0 ;
-(void)registerDelegate:(id)arg0 inSilo:(id)arg1 ;


@end


#endif