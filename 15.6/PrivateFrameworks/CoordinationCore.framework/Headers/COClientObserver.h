// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COCLIENTOBSERVER_H
#define COCLIENTOBSERVER_H

@class NSXPCConnection;
@protocol NSCopying, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface COClientObserver : NSObject <NSCopying>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConnection:(id)arg0 ;


@end


#endif