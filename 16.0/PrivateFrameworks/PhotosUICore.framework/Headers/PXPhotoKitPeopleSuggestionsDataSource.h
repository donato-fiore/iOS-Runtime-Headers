// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITPEOPLESUGGESTIONSDATASOURCE_H
#define PXPHOTOKITPEOPLESUGGESTIONSDATASOURCE_H

@protocol OS_dispatch_queue;


#import "PXPeopleSuggestionsDataSource.h"
#import "PXPhotoKitPeopleSuggestionsDataSourceState.h"

@interface PXPhotoKitPeopleSuggestionsDataSource : PXPeopleSuggestionsDataSource {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) PXPhotoKitPeopleSuggestionsDataSourceState *_state; // ivar: __state


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithState:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif