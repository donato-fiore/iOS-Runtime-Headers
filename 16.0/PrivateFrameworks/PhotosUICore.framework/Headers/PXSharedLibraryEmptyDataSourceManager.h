// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYEMPTYDATASOURCEMANAGER_H
#define PXSHAREDLIBRARYEMPTYDATASOURCEMANAGER_H



#import "PXSharedLibraryDataSourceManager.h"

@interface PXSharedLibraryEmptyDataSourceManager : PXSharedLibraryDataSourceManager



-(id)createInitialDataSource;
-(id)fetchExiting;
-(id)fetchPreview;
-(id)fetchSharedLibrary;
-(void)fetchSharedLibraryForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif