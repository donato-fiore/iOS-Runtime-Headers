// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLINDEXMAPPER_H
#define PLINDEXMAPPER_H

@protocol PLIndexMapperDataSource;

#import <Foundation/Foundation.h>


@interface PLIndexMapper : NSObject {
    id<PLIndexMapperDataSource> *_dataSource;
}




-(BOOL)applyContainerChangeNotification:(id)arg0 changeTypes:(int)arg1 toFilteredIndexes:(id)arg2 ;
-(NSUInteger)backingIndexForIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexForBackingIndex:(NSUInteger)arg0 ;
-(id)backingIndexesForIndexes:(id)arg0 ;
-(id)indexesForBackingIndexes:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;


@end


#endif