// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYMOCKDATASOURCEMANAGER_H
#define PXSHAREDLIBRARYMOCKDATASOURCEMANAGER_H



#import "PXSharedLibraryDataSourceManager.h"

@interface PXSharedLibraryMockDataSourceManager : PXSharedLibraryDataSourceManager {
    NSInteger _type;
}




+(id)_sharedLibraryMockWithType:(NSInteger)arg0 ;
+(id)invitationsDataSourceManager;
+(id)ownerExitingDataSourceManager;
+(id)ownerPreviewDataSourceManager;
+(id)ownerSharedLibraryDataSourceManager;
+(id)participantExitingDataSourceManager;
+(id)participantPreviewDataSourceManager;
+(id)participantSharedLibraryDataSourceManager;
-(id)createInitialDataSource;
-(id)fetchExiting;
-(id)fetchPreview;
-(id)fetchSharedLibrary;
-(id)init;
-(id)initWithDataSourceType:(NSInteger)arg0 ;
-(void)fetchSharedLibraryForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif