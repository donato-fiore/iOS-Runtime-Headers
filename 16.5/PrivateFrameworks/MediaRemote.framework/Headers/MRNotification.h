// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOTIFICATION_H
#define MRNOTIFICATION_H

@class NSString, NSDictionary;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface MRNotification : NSObject

@property (readonly, nonatomic) NSString *notification; // ivar: _notification
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // ivar: _xpcMessage


-(id)initWithNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif