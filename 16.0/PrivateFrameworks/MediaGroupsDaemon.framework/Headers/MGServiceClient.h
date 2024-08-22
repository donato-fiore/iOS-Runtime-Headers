// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGSERVICECLIENT_H
#define MGSERVICECLIENT_H

@class NSXPCConnection, NSDictionary;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MGServiceClient : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy, nonatomic) NSDictionary *queries; // ivar: _queries
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConnection:(id)arg0 ;
-(void)addQuery:(id)arg0 ;
-(void)enumerateQueriesUsingBlock:(id)arg0 ;
-(void)removeQuery:(id)arg0 ;
-(void)removeQueryForIdentifier:(id)arg0 ;


@end


#endif