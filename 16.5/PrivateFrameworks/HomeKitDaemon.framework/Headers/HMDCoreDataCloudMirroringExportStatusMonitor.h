// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATACLOUDMIRRORINGEXPORTSTATUSMONITOR_H
#define HMDCOREDATACLOUDMIRRORINGEXPORTSTATUSMONITOR_H

@class HMFObject, NSMutableDictionary, NSString, NSManagedObjectContext;
@protocol HMDCoreDataNotificationListener, HMFLogging, HMDCoreDataCloudMirroringExportStatusMonitorDelegate;


#import "HMDCoreData.h"

@interface HMDCoreDataCloudMirroringExportStatusMonitor : HMFObject <HMDCoreDataNotificationListener, HMFLogging>

 {
    BOOL _exportVerificationInProgress;
    BOOL _additionalExportVerificationPending;
    HMDCoreData *_coreData;
    NSMutableDictionary *_objectIDToExportedToken;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCoreDataCloudMirroringExportStatusMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithCoreData:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)configureWithExpectedObjectIDToExportedToken:(id)arg0 ;
-(void)coreData:(id)arg0 persistentStoreWithIdentifierDidChange:(id)arg1 ;
-(void)verifyModelsExportStatus;


@end


#endif