// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYPHOTOKITDATASOURCEMANAGER_H
#define PXSHAREDLIBRARYPHOTOKITDATASOURCEMANAGER_H

@class PHFetchResult, NSString;
@protocol PXPhotoLibraryUIChangeObserver;


#import "PXSharedLibraryDataSourceManager.h"

@interface PXSharedLibraryPhotoKitDataSourceManager : PXSharedLibraryDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    NSInteger _type;
    PHFetchResult *_fetchResult;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exitingDataSourceManager;
+(id)invitationsDataSourceManager;
+(id)photoLibrary;
+(id)previewDataSourceManager;
+(id)sharedLibraryDataSourceManager;
+(void)setPhotoLibrary:(id)arg0 ;
-(id)createInitialDataSource;
-(id)fetchExiting;
-(id)fetchPreview;
-(id)fetchSharedLibrary;
-(id)init;
-(id)initWithType:(NSInteger)arg0 fetchResult:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)fetchSharedLibraryForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;


@end


#endif