// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREPLACEASSETSWITHCAMERAROLLCOPIESJOB_H
#define PLREPLACEASSETSWITHCAMERAROLLCOPIESJOB_H

@class NSArray, NSPersistentStoreCoordinator;


#import "PLDaemonJob.h"
#import "PLManagedAlbum.h"
#import "PLManagedObjectContext.h"
#import "PLPhotoLibrary.h"

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob

@property (retain, nonatomic) PLManagedAlbum *album; // ivar: _album
@property (copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(void)replaceAssets:(id)arg0 withCameraRollCopiesInAlbum:(id)arg1 ;
-(NSInteger)daemonOperation;
-(id)_cameraRollAssetDerivedFromAsset:(id)arg0 ;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)dealloc;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)run;
-(void)runDaemonSide;


@end


#endif