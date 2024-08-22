// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKBRTMUTABLEORDERINDEXSET_H
#define _UIKBRTMUTABLEORDERINDEXSET_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface _UIKBRTMutableOrderIndexSet : NSObject

@property (readonly) NSUInteger beginningIndex;
@property (readonly) NSUInteger count;
@property (readonly) NSUInteger endingIndex;
@property (readonly) NSUInteger highestIndex;
@property (readonly, nonatomic) NSMutableIndexSet *indexSet; // ivar: _indexSet
@property (readonly) NSUInteger lowestIndex;
@property (nonatomic) BOOL reversed; // ivar: _reversed


-(id)description;
-(id)init;
-(id)initWithIndexesInRange:(struct _NSRange )arg0 ;
-(void)addIndex:(NSUInteger)arg0 ;
-(void)removeIndex:(NSUInteger)arg0 ;
-(void)removeIndexes:(id)arg0 ;


@end


#endif