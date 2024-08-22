// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYDATASOURCEMANAGER_H
#define PXSHAREDLIBRARYDATASOURCEMANAGER_H



#import "PXSectionedDataSourceManager.h"
#import "PXSharedLibraryDataSource.h"

@interface PXSharedLibraryDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXSharedLibraryDataSource *dataSource;


+(id)currentExitingDataSourceManager;
+(id)currentInvitationsDataSourceManager;
+(id)currentPreviewDataSourceManager;
+(id)currentSharedLibraryDataSourceManager;
+(id)exitingDataSourceManagerForType:(NSInteger)arg0 ;
+(id)invitationsDataSourceManagerForType:(NSInteger)arg0 ;
+(id)keyPathsAffectingCurrentExitingDataSourceManager;
+(id)keyPathsAffectingCurrentInvitationsDataSourceManager;
+(id)keyPathsAffectingCurrentPreviewDataSourceManager;
+(id)keyPathsAffectingCurrentSharedLibraryDataSourceManager;
+(id)previewDataSourceManagerForType:(NSInteger)arg0 ;
+(id)sharedLibraryDataSourceManagerForType:(NSInteger)arg0 ;
-(id)fetchExiting;
-(id)fetchPreview;
-(id)fetchSharedLibrary;
-(void)fetchSharedLibraryForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif