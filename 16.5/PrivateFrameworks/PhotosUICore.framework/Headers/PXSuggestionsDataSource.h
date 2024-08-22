// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSUGGESTIONSDATASOURCE_H
#define PXSUGGESTIONSDATASOURCE_H

@protocol PXDisplaySuggestionFetchResult;


#import "PXSectionedDataSource.h"

@interface PXSuggestionsDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSObject<PXDisplaySuggestionFetchResult> *suggestions; // ivar: _suggestions


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)init;
-(id)initWithSuggestionsFetchResult:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif