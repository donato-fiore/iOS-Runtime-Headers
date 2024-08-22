// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCKFAUXDATABASESTORECOORDINATOR_H
#define SCKFAUXDATABASESTORECOORDINATOR_H

@protocol SCKDatabaseStoreCoordinator, OS_dispatch_queue, SCKDatabaseStore;

#import <Foundation/Foundation.h>


@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<SCKDatabaseStore> *store; // ivar: _store
@property (readonly, nonatomic) NSObject<SCKDatabaseStore> *underlyingStore;


-(id)initWithDatabaseStore:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)readWithAccessor:(id)arg0 ;
-(void)readZone:(id)arg0 withAccessor:(id)arg1 ;
-(void)reloadWithAccessor:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)writeWithAccessor:(id)arg0 ;
-(void)writeZone:(id)arg0 withAccessor:(id)arg1 ;


@end


#endif