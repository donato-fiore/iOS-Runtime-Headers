// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHARINGFEATUREEXTRACTOR_H
#define PGSHARINGFEATUREEXTRACTOR_H

@class PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGSharingFeatureExtractor : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}




+(id)extractFeatureNodesFromAsset:(id)arg0 andPersonLocalIdentifiers:(id)arg1 inGraph:(id)arg2 ;
+(id)featuresFilename;
+(id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)arg0 ;
+(id)recordsFilename;
+(void)invalidateCacheForPhotoLibrary:(id)arg0 ;
-(BOOL)persistFeatures:(id)arg0 ;
-(BOOL)persistSharingRecords:(id)arg0 ;
-(id)_loadAllPersistedSharingRecordsFromDisk;
-(id)extractFeaturesFromSharingRecords:(id)arg0 withGraph:(id)arg1 progressBlock:(id)arg2 ;
-(id)extractSharingRecordsWithGraph:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
-(id)persistedFeatures;
-(id)persistedSharingRecords;
-(id)persistedSharingRecordsForType:(NSUInteger)arg0 ;
-(void)prefetchAssetInSharingRecords:(id)arg0 ;


@end


#endif