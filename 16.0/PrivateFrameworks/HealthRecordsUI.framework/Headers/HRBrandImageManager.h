// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRBRANDIMAGEMANAGER_H
#define HRBRANDIMAGEMANAGER_H

@class NSCache, NSOperationQueue, HKHealthRecordsStore, NSMutableDictionary, HKClinicalProviderServiceStore;

#import <Foundation/Foundation.h>


@interface HRBrandImageManager : NSObject

@property (retain, nonatomic) NSCache *fetchedImages; // ivar: _fetchedImages
@property (retain) NSOperationQueue *fileOperationQueue; // ivar: _fileOperationQueue
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests; // ivar: _outstandingRequests
@property (retain, nonatomic) HKClinicalProviderServiceStore *providerServiceStore; // ivar: _providerServiceStore


+(CGFloat)defaultLogoDimension;
+(id)_fetchOrCreateSalt;
+(id)imageManagerWithHealthRecordsStore:(id)arg0 ;
-(id)_hashedSaltedStringFromString:(id)arg0 ;
-(id)_logoURLForBrand:(id)arg0 ;
-(id)_scaleKeyForCurrentDevice;
-(id)initWithHealthRecordsStore:(id)arg0 ;
-(id)loadStoredLogoForBrand:(id)arg0 ;
-(void)_writeImageData:(id)arg0 brand:(id)arg1 ;
-(void)cacheFeaturedBrandLogosWithCompletion:(id)arg0 ;
-(void)dispatchResponsesForBrand:(id)arg0 image:(id)arg1 error:(id)arg2 ;
-(void)fetchLogoForBrand:(id)arg0 completion:(id)arg1 ;
-(void)onMainQueue:(id)arg0 ;
-(void)processFetchResponseWithData:(id)arg0 error:(id)arg1 brand:(id)arg2 ;
-(void)retrieveLogoForBrand:(id)arg0 size:(CGFloat)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif