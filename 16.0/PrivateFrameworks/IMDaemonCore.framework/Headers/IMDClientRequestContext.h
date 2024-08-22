// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCLIENTREQUESTCONTEXT_H
#define IMDCLIENTREQUESTCONTEXT_H

@class NSString;
@protocol IMDaemonListenerProtocol;

#import <Foundation/Foundation.h>


@interface IMDClientRequestContext : NSObject

@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (readonly, copy, nonatomic) NSString *listenerID; // ivar: _listenerID
@property (readonly, nonatomic) NSObject<IMDaemonListenerProtocol> *replyProxy; // ivar: _replyProxy


+(id)currentContext;
+(void)setCurrentContext:(id)arg0 ;
-(id)initWithListenerID:(id)arg0 auditToken:(struct ? )arg1 capabilities:(NSUInteger)arg2 replyProxy:(id)arg3 ;


@end


#endif