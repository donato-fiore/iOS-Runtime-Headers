// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPLAZYTRANSFORMSECTIONEDCOLLECTIONDATASOURCE_H
#define _MPLAZYTRANSFORMSECTIONEDCOLLECTIONDATASOURCE_H

@class NSString;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>

#import "MPSectionedCollection.h"

@interface _MPLazyTransformSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>



@property (readonly, nonatomic) MPSectionedCollection *collection; // ivar: _collection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *itemTransform; // ivar: _itemTransform
@property (readonly, copy, nonatomic) id *sectionTransform; // ivar: _sectionTransform
@property (readonly) Class superclass;


-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
// -(id)initWithSectionedCollection:(id)arg0 sectionTransform:(id)arg1 itemTransform:(unk)arg2  ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif