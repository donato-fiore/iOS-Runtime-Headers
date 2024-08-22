// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMESSAGECONTEXT_H
#define IMMESSAGECONTEXT_H

@protocol OS_voucher, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "IMLocalObject.h"

@interface IMMessageContext : NSObject {
    BOOL _boost;
}


@property (retain) id *context; // ivar: _context
@property (retain) IMLocalObject *localObject; // ivar: _localObject
@property (nonatomic) BOOL needReply; // ivar: _needReply
@property (nonatomic) BOOL reply; // ivar: _reply
@property BOOL shouldBoost; // ivar: _shouldBoost
@property (nonatomic) BOOL sync; // ivar: _sync
@property (retain) NSObject<OS_voucher> *voucher; // ivar: _voucher
@property (retain) NSObject<OS_xpc_object> *xpcMessage; // ivar: _xpcMessage


-(BOOL)isReply;
-(BOOL)isSync;
-(id)init;


@end


#endif