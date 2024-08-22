// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGSHH2DATABASEADAPTER_H
#define HMDCOMPOSITESETTINGSHH2DATABASEADAPTER_H

@class NSUUID, NSString;
@protocol HMFLogging, HMDCompositeSettingsDatabaseAdapter, HMDCompositeSettingsDatabaseAdapterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMCContext.h"

@interface HMDCompositeSettingsHH2DatabaseAdapter : NSObject <HMFLogging, HMDCompositeSettingsDatabaseAdapter>



@property (readonly, nonatomic) NSUUID *accessoryID; // ivar: _accessoryID
@property (readonly, nonatomic) HMCContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDCompositeSettingsDatabaseAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeID; // ivar: _homeID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, weak, nonatomic) id *rawDatabase; // ivar: _rawDatabase
@property (readonly, nonatomic) NSString *strongRawDatabase; // ivar: _strongRawDatabase
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_modelFromAccessory:(id)arg0 ;
-(id)emptyModelWithID:(id)arg0 parentModelID:(id)arg1 modelClass:(Class)arg2 ;
-(id)fetchModelWithID:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 homeID:(id)arg1 workingManagedObjectContext:(id)arg2 queue:(id)arg3 notificationCenter:(id)arg4 ;
-(id)logIdentifier;
-(void)_copySettingsFromModel:(id)arg0 toAccessory:(id)arg1 ;
-(void)_handleAccessoryUpdateTransaction:(id)arg0 ;
-(void)_setDefaultVersionsOnModel:(id)arg0 ;
-(void)addModel:(id)arg0 withOptionsLabel:(id)arg1 completion:(id)arg2 ;
-(void)startObservingModelWithID:(id)arg0 ;
-(void)startWithDelegate:(id)arg0 ;
-(void)stopObservingModelWithID:(id)arg0 ;


@end


#endif