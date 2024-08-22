// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOMPOSITESETTINGSLEGACYDATABASEADAPTER_H
#define HMDCOMPOSITESETTINGSLEGACYDATABASEADAPTER_H

@class NSString;
@protocol HMBLocalZoneModelObserver, HMFLogging, HMDCompositeSettingsDatabaseAdapter, HMDCompositeSettingsDatabaseAdapterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDCompositeSettingsZoneManager.h"

@interface HMDCompositeSettingsLegacyDatabaseAdapter : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCompositeSettingsDatabaseAdapter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDCompositeSettingsDatabaseAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class modelClass; // ivar: _modelClass
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, weak, nonatomic) id *rawDatabase; // ivar: _rawDatabase
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) HMDCompositeSettingsZoneManager *zoneManager; // ivar: _zoneManager


+(id)logCategory;
-(id)emptyModelWithID:(id)arg0 parentModelID:(id)arg1 modelClass:(Class)arg2 ;
-(id)fetchModelWithID:(id)arg0 ;
-(id)initWithZoneManager:(id)arg0 modelClass:(Class)arg1 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(void)addModel:(id)arg0 withOptionsLabel:(id)arg1 completion:(id)arg2 ;
-(void)startObservingModelWithID:(id)arg0 ;
-(void)startWithDelegate:(id)arg0 ;
-(void)stopObservingModelWithID:(id)arg0 ;


@end


#endif