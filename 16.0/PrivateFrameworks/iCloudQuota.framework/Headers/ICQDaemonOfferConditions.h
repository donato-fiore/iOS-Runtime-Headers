// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQDAEMONOFFERCONDITIONS_H
#define ICQDAEMONOFFERCONDITIONS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICQDaemonOfferConditions : NSObject <NSCopying>



@property (nonatomic, getter=isDeviceStorageAlmostFull) BOOL deviceStorageAlmostFull; // ivar: _deviceStorageAlmostFull
@property (nonatomic, getter=isPhotosCloudEnabled) BOOL photosCloudEnabled; // ivar: _photosCloudEnabled
@property (copy, nonatomic) NSNumber *photosLibrarySize; // ivar: _photosLibrarySize
@property (nonatomic, getter=isPhotosOptimizeEnabled) BOOL photosOptimizeEnabled; // ivar: _photosOptimizeEnabled


+(BOOL)hasPhotosCloudEverBeenEnabled;
+(BOOL)isCachedCloudQuotaAlmostFullOrFull;
+(BOOL)isDeviceStorageNearLowButNotLow;
+(BOOL)isSimulatedDeviceStorageAlmostFull;
+(id)currentConditions;
+(id)photosLibraryUploadSize;
+(id)photosVideosCount;
+(void)getPhotosLibraryUploadSizeWithCompletion:(id)arg0 ;
+(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCurrentConditions;


@end


#endif