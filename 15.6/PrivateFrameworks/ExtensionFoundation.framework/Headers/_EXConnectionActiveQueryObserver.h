// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXCONNECTIONACTIVEQUERYOBSERVER_H
#define _EXCONNECTIONACTIVEQUERYOBSERVER_H

@class NSXPCConnection;
@protocol _EXActiveQueryObserver, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface _EXConnectionActiveQueryObserver : NSObject <_EXActiveQueryObserver>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (retain) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWitConnection:(id)arg0 ;
-(void)query:(id)arg0 resultDidUpdate:(id)arg1 ;


@end


#endif