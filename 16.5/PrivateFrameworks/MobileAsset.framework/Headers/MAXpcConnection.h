// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAXPCCONNECTION_H
#define MAXPCCONNECTION_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface MAXpcConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, nonatomic) NSString *connectionId; // ivar: _connectionId


-(BOOL)notValid;
-(id)initWithServiceName:(id)arg0 ;


@end


#endif