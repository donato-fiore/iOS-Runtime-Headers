// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMSUGGESTIONSDATASOURCE_H
#define PXCMMSUGGESTIONSDATASOURCE_H

@protocol OS_dispatch_queue;


#import "PXSectionedDataSource.h"
#import "PXCMMSuggestionsDataSourceState.h"

@interface PXCMMSuggestionsDataSource : PXSectionedDataSource {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) PXCMMSuggestionsDataSourceState *_state; // ivar: __state


-(NSInteger)_adjustedIndexFromIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithState:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)suggestionAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif