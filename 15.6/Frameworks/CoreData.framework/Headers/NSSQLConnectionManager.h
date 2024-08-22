// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLCONNECTIONMANAGER_H
#define NSSQLCONNECTIONMANAGER_H


#import <Foundation/Foundation.h>

#import "NSSQLCore.h"

@interface NSSQLConnectionManager : NSObject {
    NSSQLCore *_sqlCore;
    id *_filter;
}




-(BOOL)handleStoreRequest:(id)arg0 ;
-(id)initWithSQLCore:(id)arg0 priority:(NSUInteger)arg1 seedConnection:(id)arg2 ;
-(id)initWithSQLCore:(id)arg0 seedConnection:(id)arg1 ;
-(id)sqlCore;
-(void)dealloc;
-(void)disconnectAllConnections;
-(void)scheduleBarrierBlock:(id)arg0 ;
-(void)scheduleConnectionsBarrier:(id)arg0 ;
-(void)setExclusiveLockingMode:(BOOL)arg0 ;


@end


#endif