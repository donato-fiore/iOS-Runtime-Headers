// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCONNECTION_H
#define MKCONNECTION_H

@class NSString, NSValue;
@protocol OS_nw_connection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MKConnection : NSObject

@property (nonatomic) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (retain, nonatomic) NSValue *identifier; // ivar: _identifier
@property (nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithConnection:(id)arg0 queue:(id)arg1 hostname:(id)arg2 ;


@end


#endif