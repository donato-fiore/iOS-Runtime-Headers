// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHDOWNSAMPLEDATA_H
#define TSCHDOWNSAMPLEDATA_H

@class NSIndexSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface TSCHDownsampleData : NSObject

@property (readonly, copy, nonatomic) NSIndexSet *indexSet; // ivar: _indexSet
@property (readonly, copy, nonatomic) NSDictionary *indexToPositionMap; // ivar: _indexToPositionMap
@property (readonly, copy, nonatomic) NSDictionary *positionToIndexMap; // ivar: _positionToIndexMap


+(id)dataWithIndexSet:(id)arg0 ;
+(id)dataWithIndexSet:(id)arg0 indexToPositionMap:(id)arg1 positionToIndexMap:(id)arg2 ;
+(id)emptyData;
-(NSUInteger)indexAtPosition:(NSUInteger)arg0 ;
-(NSUInteger)positionOfIndex:(NSUInteger)arg0 ;
-(id)initWithIndexSet:(id)arg0 ;
-(id)initWithIndexSet:(id)arg0 indexToPositionMap:(id)arg1 positionToIndexMap:(id)arg2 ;


@end


#endif