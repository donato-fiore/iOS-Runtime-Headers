// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSINGLECOLLECTIONDATASECTION_H
#define _PXSINGLECOLLECTIONDATASECTION_H

@protocol PXDisplayCollection;


#import "PXCollectionsDataSection.h"

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {
    NSInteger _count;
}


@property (readonly, nonatomic) NSObject<PXDisplayCollection> *displayCollection; // ivar: _displayCollection


-(NSInteger)count;
-(NSInteger)indexOfCollection:(id)arg0 ;
-(id)initWithDisplayCollection:(id)arg0 ;
-(id)objectAtIndex:(NSInteger)arg0 ;


@end


#endif