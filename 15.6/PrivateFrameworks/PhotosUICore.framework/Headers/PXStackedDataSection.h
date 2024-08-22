// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTACKEDDATASECTION_H
#define PXSTACKEDDATASECTION_H

@class NSArray, NSIndexSet, NSDictionary, NSEnumerator;
@protocol NSFastEnumeration;


#import "PXDataSection.h"

@interface PXStackedDataSection : PXDataSection {
    NSArray *_childDataSectionsStartIndexes;
    NSIndexSet *_nonEmptyChildDataSectionsStartIndexSet;
    NSDictionary *_nonEmptyChildDataSectionsIndexMap;
    NSEnumerator *_childDataSectionsEnumerator;
    id<NSFastEnumeration> *_currentEnumerator;
    NSUInteger _enumerationMutations;
    *NSUInteger _currentEnumeratorMutationsPtr;
    NSInteger _count;
}


@property (readonly, copy, nonatomic) NSArray *childDataSections; // ivar: _childDataSections


+(id)dataSectionForAssetsInCollections:(id)arg0 ;
-(NSInteger)count;
-(NSInteger)indexOfChildDataSourceForObjectAtIndex:(NSInteger)arg0 localIndex:(*NSInteger)arg1 ;
-(NSInteger)itemStartIndexForChildDataSourceAtIndex:(NSInteger)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_nextEnumerator;
-(id)debugDescription;
-(id)initWithChildDataSections:(id)arg0 outlineObject:(id)arg1 ;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(void)_resetEnumerationState:(struct ? *)arg0 ;


@end


#endif