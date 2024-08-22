// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSOURCELIBRARYINFOMOCK_H
#define PXSHAREDLIBRARYSOURCELIBRARYINFOMOCK_H

@class NSString;
@protocol PXSharedLibrarySourceLibraryInfo;

#import <Foundation/Foundation.h>


@interface PXSharedLibrarySourceLibraryInfoMock : NSObject <PXSharedLibrarySourceLibraryInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryEnabled;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryInitialSyncCompleted;
@property (readonly, nonatomic) BOOL isSystemPhotoLibrary;
@property (readonly) Class superclass;


-(BOOL)isFailedToURLFetchOwnedSharedLibraryError:(id)arg0 ;
-(BOOL)isSharedLibraryNotFoundError:(id)arg0 ;
-(BOOL)presentCustomInformationForError:(id)arg0 customTitle:(*id)arg1 customMessage:(*id)arg2 ;
-(id)createDataSourceManager;
-(id)pickerConfiguration;
-(struct ? )assetsCountsForAssetLocalIdentifiers:(id)arg0 ;
-(void)createPreviewWithEmailAddresses:(id)arg0 phoneNumbers:(id)arg1 autoSharePolicy:(NSInteger)arg2 startDate:(id)arg3 personUUIDs:(id)arg4 progress:(id)arg5 presentationEnvironment:(id)arg6 withCompletionHandler:(id)arg7 ;
-(void)createSharedLibraryWithEmailAddresses:(id)arg0 phoneNumbers:(id)arg1 autoSharePolicy:(NSInteger)arg2 startDate:(id)arg3 personUUIDs:(id)arg4 progress:(id)arg5 presentationEnvironment:(id)arg6 withCompletionHandler:(id)arg7 ;
-(void)fetchEstimatedAssetsCountsForExit:(BOOL)arg0 imageCount:(*NSUInteger)arg1 videoCount:(*NSUInteger)arg2 audioCount:(*NSUInteger)arg3 itemCount:(*NSUInteger)arg4 ;
-(void)fetchEstimatedAssetsCountsForStartDate:(id)arg0 personUUIDs:(id)arg1 completion:(id)arg2 ;
-(void)fetchEstimatedAssetsCountsShareEverythingPolicyWithCompletion:(id)arg0 ;
-(void)fetchSuggestedStartDateForPersonUUIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif