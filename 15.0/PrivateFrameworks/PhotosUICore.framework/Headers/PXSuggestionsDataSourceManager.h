// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSUGGESTIONSDATASOURCEMANAGER_H
#define PXSUGGESTIONSDATASOURCEMANAGER_H

@class NSString;
@protocol PXChangeObserver, PXPhotoLibraryUIChangeObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXSuggestionsDataSource.h"

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXPhotoLibraryUIChangeObserver>



@property (readonly, nonatomic) PXSuggestionsDataSource *dataSource;
@property (readonly, nonatomic) unsigned short dataSourceType; // ivar: _dataSourceType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)baseFetchPredicate;
+(id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)arg0 ;
+(id)typePredicateForDataSourceType:(unsigned short)arg0 ;
-(id)_createNewDataSource;
-(id)createInitialDataSource;
-(id)init;
-(id)initWithDataSourceType:(unsigned short)arg0 ;
-(void)_handleChangeWithDetails:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;


@end


#endif