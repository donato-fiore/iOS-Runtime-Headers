// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDVENDORDATAMANAGER_H
#define HMDVENDORDATAMANAGER_H

@class HMFObject, NSDictionary, NSString, HMFTimer, NSURL, NSURLSession;
@protocol HMFLogging, HMFTimerDelegate, OS_dispatch_queue;



@interface HMDVendorDataManager : HMFObject <HMFLogging, HMFTimerDelegate>



@property (retain, nonatomic) NSDictionary *collectionsByManufacturer; // ivar: _collectionsByManufacturer
@property (nonatomic) NSInteger dataVersion; // ivar: _dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *entriesByProductData; // ivar: _entriesByProductData
@property (readonly, nonatomic) HMFTimer *fetchTimer; // ivar: _fetchTimer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *urlForBundledInternalPlist;
@property (readonly, nonatomic) NSURL *urlForBundledPlist;
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)dbURL;
+(id)logCategory;
+(id)sharedVendorDataManager;
-(BOOL)_loadDatabaseFromDictionary:(id)arg0 ;
-(BOOL)_loadDatabaseFromFilePath:(id)arg0 fileDescription:(id)arg1 ;
-(BOOL)_loadDatabaseFromFileURL:(id)arg0 fileDescription:(id)arg1 ;
-(BOOL)_parseDatabaseFromDictionary:(id)arg0 dataVersion:(*NSInteger)arg1 collectionsByManufacturer:(*id)arg2 entriesByProductData:(*id)arg3 ;
-(BOOL)_parseManufacturersList:(id)arg0 collectionsByManufacturer:(*id)arg1 entriesByProductData:(*id)arg2 ;
-(id)_modelsStringForManufacturer:(id)arg0 model:(id)arg1 dictionary:(id)arg2 key:(id)arg3 ;
-(id)_parseVendorModelEntryForManufacturer:(id)arg0 model:(id)arg1 dictionary:(id)arg2 ;
-(id)init;
-(id)initWithDefaults;
-(id)initWithWorkQueue:(id)arg0 urlSession:(id)arg1 fetchTimer:(id)arg2 ;
-(id)vendorModelEntryForManufacturer:(id)arg0 model:(id)arg1 ;
-(id)vendorModelEntryForProductData:(id)arg0 ;
-(void)_fetchDataFromServer;
-(void)_handleDataFromServer:(id)arg0 ;
-(void)_handleServerResponse:(id)arg0 withData:(id)arg1 error:(id)arg2 ;
-(void)_loadDatabaseFromLocalFiles;
-(void)_start;
-(void)timerDidFire:(id)arg0 ;


@end


#endif