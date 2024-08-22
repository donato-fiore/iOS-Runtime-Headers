// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSDATASOURCE_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSDATASOURCE_H

@class NSMutableDictionary, NSDate, NSArray, PHFetchResult;
@protocol PXSharedLibrarySharingSuggestionsDataSourceDelegate;


#import "PXSectionedDataSource.h"

@interface PXSharedLibrarySharingSuggestionsDataSource : PXSectionedDataSource {
    NSMutableDictionary *_promiseByContainer;
}


@property (readonly, nonatomic) NSDate *aggregateBeforeDate; // ivar: _aggregateBeforeDate
@property (readonly, nonatomic) NSArray *containers; // ivar: _containers
@property (weak, nonatomic) NSObject<PXSharedLibrarySharingSuggestionsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PHFetchResult *sharingSuggestions; // ivar: _sharingSuggestions


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_promiseForContainer:(id)arg0 ;
-(id)initWithSharingSuggestions:(id)arg0 aggregateBeforeDate:(id)arg1 ;
-(id)itemIndexesForSharingSuggestions:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif