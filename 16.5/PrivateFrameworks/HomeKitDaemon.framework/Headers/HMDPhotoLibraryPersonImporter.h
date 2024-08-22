// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPHOTOLIBRARYPERSONIMPORTER_H
#define HMDPHOTOLIBRARYPERSONIMPORTER_H

@class HMFObject, NSUUID, NSString, HMIHomePersonManager, HMIExternalPersonManager;
@protocol HMDPhotoLibraryObserverDelegate, HMFLogging, HMDPersonDataInterface, HMDPersonDataSource, HMMLogEventSubmitting, OS_dispatch_queue;


#import "HMDCloudPhotosSettingObserver.h"
#import "HMDPhotoLibrary.h"
#import "HMDPhotoLibraryObserver.h"

@interface HMDPhotoLibraryPersonImporter : HMFObject <HMDPhotoLibraryObserverDelegate, HMFLogging, HMDPersonDataInterface>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver; // ivar: _cloudPhotosSettingObserver
@property (weak) NSObject<HMDPersonDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) HMDPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain) HMDPhotoLibraryObserver *photoLibraryObserver; // ivar: _photoLibraryObserver
@property (copy) id *photoLibraryObserverFactory; // ivar: _photoLibraryObserverFactory
@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_updatePersonsUsingBatchChange:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 photoLibrary:(id)arg1 workQueue:(id)arg2 cloudPhotosSettingObserver:(id)arg3 logEventSubmitter:(id)arg4 ;
-(id)logIdentifier;
-(void)_configure;
-(void)_handleUpdatedCloudPhotosSetting;
-(void)_registerForNotifications;
-(void)_submitLogEventForFaceCrops:(id)arg0 ;
-(void)_submitLogEventsForUpdatedPersonsWithCurrentPersons:(id)arg0 previousPersons:(id)arg1 ;
-(void)_unconfigure;
-(void)_updateFaceCropsForAllPersonsUsingCurrentPersons:(id)arg0 batchChange:(id)arg1 ;
-(void)_updateFaceCropsForPersons:(id)arg0 usingBatchChange:(id)arg1 ;
-(void)_updateFaceCropsForPersonsWithUpdatedPhotosFaceCropsUsingCurrentPersons:(id)arg0 batchChange:(id)arg1 ;
-(void)_updateFaceCropsWithCurrentPhotoLibraryFaceCrops:(id)arg0 forPersonWithUUID:(id)arg1 usingBatchChange:(id)arg2 ;
-(void)_updatePersonsAndFaceCrops:(BOOL)arg0 ;
-(void)configureWithDataSource:(id)arg0 home:(id)arg1 ;
-(void)handleCloudPhotosEnabledDidChangeNotification:(id)arg0 ;
-(void)observerDidObserveMajorChange:(id)arg0 ;
-(void)observerDidObserveMinorChange:(id)arg0 ;


@end


#endif