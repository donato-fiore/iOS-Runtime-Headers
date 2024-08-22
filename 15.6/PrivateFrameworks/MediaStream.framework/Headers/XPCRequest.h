// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XPCREQUEST_H
#define XPCREQUEST_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface XPCRequest : NSObject {
    id *_handler;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *message; // ivar: _message
@property (readonly, nonatomic) NSObject<OS_xpc_object> *reply; // ivar: _reply
@property (readonly, nonatomic) NSUInteger sequence; // ivar: _sequence


-(id)initWithMessage:(id)arg0 sequence:(NSUInteger)arg1 connection:(id)arg2 ;
-(void)sendReply;


@end


#endif