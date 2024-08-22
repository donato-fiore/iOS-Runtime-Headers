// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSOURCELIBRARYINFOPHOTOKIT_H
#define PXSHAREDLIBRARYSOURCELIBRARYINFOPHOTOKIT_H

@class NSString, PHPhotoLibrary;
@protocol PXSharedLibrarySourceLibraryInfo, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXSharedLibrarySourceLibraryInfoPhotoKit : NSObject <PXSharedLibrarySourceLibraryInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryEnabled;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryInitialSyncCompleted;
@property (readonly, nonatomic) BOOL isSystemPhotoLibrary;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)_isRegionUnsupportedError:(id)arg0 ;
-(BOOL)_isTooManyParticipantsError:(id)arg0 ;
-(BOOL)_isU13RestrictedError:(id)arg0 ;
-(BOOL)isFailedToURLFetchOwnedSharedLibraryError:(id)arg0 ;
-(BOOL)isSharedLibraryNotFoundError:(id)arg0 ;
-(BOOL)presentCustomInformationForError:(id)arg0 customTitle:(*id)arg1 customMessage:(*id)arg2 ;
-(BOOL)presentServerGeneratedMessageForError:(id)arg0 customMessage:(*id)arg1 learnMoreURL:(*id)arg2 ;
-(id)createDataSourceManager;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
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