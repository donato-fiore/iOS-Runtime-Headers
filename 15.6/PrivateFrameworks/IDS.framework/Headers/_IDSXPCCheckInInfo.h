// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IDSXPCCHECKININFO_H
#define _IDSXPCCHECKININFO_H

@protocol IDSXPCConnectionProtocol, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _IDSXPCCheckInInfo : NSObject

@property (retain, nonatomic) NSObject<IDSXPCConnectionProtocol> *connection; // ivar: _connection
@property (nonatomic) BOOL finishedTransaction; // ivar: _finishedTransaction
@property (retain, nonatomic) NSObject<OS_xpc_object> *tempObject; // ivar: _tempObject




@end


#endif