// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBLOCALDATABASE_H
#define HMBLOCALDATABASE_H

@class HMFObject, NSString, NSMapTable, NSOperationQueue;
@protocol HMFLogging, HMBLocalDatabaseDelegate;


#import "HMBLocalSQLContext.h"
#import "HMBModelContainer.h"

@interface HMBLocalDatabase : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMBLocalDatabaseDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMBLocalSQLContext *local; // ivar: _local
@property (copy, nonatomic) id *localZoneFactory; // ivar: _localZoneFactory
@property (readonly, nonatomic) HMBModelContainer *modelContainer; // ivar: _modelContainer
@property (readonly, nonatomic) NSMapTable *openZonesByZoneID; // ivar: _openZonesByZoneID
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)removeLocalDataForZone:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldLogPrivateInformation;
-(id)fetchZonesWithError:(*id)arg0 ;
-(id)initWithDatastorePath:(id)arg0 configuration:(id)arg1 ;
-(id)initWithLocalSQLContext:(id)arg0 configuration:(id)arg1 ;
-(id)logIdentifier;
-(id)openZoneWithMirror:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)openZoneWithZoneID:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)openedZoneWithMirror:(id)arg0 ;
-(id)openedZoneWithZoneID:(id)arg0 ;
-(id)removeZone:(id)arg0 ;
-(void)dealloc;
-(void)detectedLocalCorruptionWithInfo:(id)arg0 ;
-(void)handleLocalZoneShutdown:(id)arg0 ;


@end


#endif