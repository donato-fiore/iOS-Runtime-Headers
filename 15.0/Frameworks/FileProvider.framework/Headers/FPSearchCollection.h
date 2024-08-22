// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSEARCHCOLLECTION_H
#define FPSEARCHCOLLECTION_H

@class NSPredicate;
@protocol FPSearchQueryResultsProviding;


#import "FPQueryCollection.h"
#import "NSFileProviderSearchQuery.h"

@interface FPSearchCollection : FPQueryCollection <FPSearchQueryResultsProviding>

 {
    NSPredicate *_filterPredicate;
}


@property (copy, nonatomic) NSFileProviderSearchQuery *searchQuery;


-(BOOL)isCollectionValidForItem:(id)arg0 ;
-(id)_createDescriptorWithSortDescriptors:(id)arg0 ;
-(id)_enumerationSettingsPredicate;
-(id)createDataSourceWithSortDescriptors:(id)arg0 ;
-(id)init;
-(id)scopedSearchQuery;


@end


#endif