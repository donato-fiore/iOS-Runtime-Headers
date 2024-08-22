// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPERSONSSECTIONEDDATASOURCEMANAGER_H
#define PXPERSONSSECTIONEDDATASOURCEMANAGER_H

@class NSString, PHPhotoLibrary;
@protocol PXPhotoLibraryUIChangeObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXPersonsSectionedDataSource.h"
#import "PXPhotoLibraryLocalDefaults.h"

@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>



@property (readonly, nonatomic) PXPersonsSectionedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults; // ivar: _localDefaults
@property (nonatomic) NSUInteger peopleHomeSortingType; // ivar: _peopleHomeSortingType
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(NSInteger)_personTypeForSection:(NSInteger)arg0 ;
-(id)createInitialDataSource;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)reloadData;


@end


#endif