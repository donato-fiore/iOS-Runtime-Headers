// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLBOOKLETMIGRATIONSTORE_H
#define BLBOOKLETMIGRATIONSTORE_H


#import <Foundation/Foundation.h>

#import "BLServiceProxy.h"

@interface BLBookletMigrationStore : NSObject

@property (readonly, nonatomic) BLServiceProxy *serviceProxy; // ivar: _serviceProxy


-(BOOL)removeAllMigrationInfosExcludingStates:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMigrationState:(NSInteger)arg0 forStoreIDs:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)migrationInfosWithState:(NSInteger)arg0 completion:(id)arg1 ;
-(void)migrationInfosWithStates:(id)arg0 completion:(id)arg1 ;
-(void)migrationInfosWithStoreIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif