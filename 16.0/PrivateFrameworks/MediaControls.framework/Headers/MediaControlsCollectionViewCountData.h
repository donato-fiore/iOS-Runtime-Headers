// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSCOLLECTIONVIEWCOUNTDATA_H
#define MEDIACONTROLSCOLLECTIONVIEWCOUNTDATA_H

@class NSMutableIndexSet, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MediaControlsCollectionViewCountData : NSObject <NSCopying>

 {
    NSMutableIndexSet *_insertedIndexes;
    NSMutableIndexSet *_deletedIndexes;
    NSMutableIndexSet *_updatedIndexes;
}


@property (readonly, copy, nonatomic) NSIndexSet *deletedIndexes;
@property (nonatomic) BOOL hasPendingChanges; // ivar: _hasPendingChanges
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (readonly, copy, nonatomic) NSIndexSet *updatedIndexes;


-(BOOL)validateCountForNumberOfItems:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithNumberOfItems:(NSInteger)arg0 ;
-(void)applyChanges;
-(void)deleteItemAtIndex:(NSInteger)arg0 ;
-(void)deleteItemsAtIndexes:(id)arg0 ;
-(void)insertItemAtIndex:(NSInteger)arg0 ;
-(void)insertItemsAtIndexes:(id)arg0 ;
-(void)moveItemAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)reloadItemAtIndex:(NSInteger)arg0 ;
-(void)reloadItemsAtIndexes:(id)arg0 ;


@end


#endif