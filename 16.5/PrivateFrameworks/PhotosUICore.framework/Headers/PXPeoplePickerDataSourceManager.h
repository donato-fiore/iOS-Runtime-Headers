// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEPICKERDATASOURCEMANAGER_H
#define PXPEOPLEPICKERDATASOURCEMANAGER_H

@class NSMutableArray, NSArray, PHFetchResult, NSString;
@protocol PXPeoplePickerMutableDataSourceManager, PXPhotoLibraryUIChangeObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXPeoplePickerDataSource.h"

@interface PXPeoplePickerDataSourceManager : PXSectionedDataSourceManager <PXPeoplePickerMutableDataSourceManager, PXPhotoLibraryUIChangeObserver>

 {
    NSMutableArray *_selectedLocalIdentifiers;
    NSArray *_suggestedLocalIdentifiers;
    PHFetchResult *_people;
}


@property (readonly, nonatomic) PXPeoplePickerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)currentDataSourceManager;
-(id)createInitialDataSource;
-(id)init;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)deselectAllLocalIdentifiers;
-(void)performChanges:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)setDisabledLocalIdentifiers:(id)arg0 ;
-(void)setLocalIdentifiers:(id)arg0 selected:(BOOL)arg1 ;
-(void)setPeople:(id)arg0 ;
-(void)setSuggestedLocalIdentifiers:(id)arg0 withPhotoLibrary:(id)arg1 ;


@end


#endif