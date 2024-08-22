// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMAPRIORIPATTERNMINER_H
#define BMAPRIORIPATTERNMINER_H

@class NSArray;
@protocol BMPatternMiner;

#import <Foundation/Foundation.h>


@interface BMAprioriPatternMiner : NSObject <BMPatternMiner>



@property (readonly, nonatomic) NSArray *indexBaskets; // ivar: _indexBaskets
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) NSUInteger maxItemsetSize; // ivar: _maxItemsetSize
@property BOOL shouldStop; // ivar: _shouldStop


-(id)getItemIndexSetsWithMinSupport:(CGFloat)arg0 itemIndexSets:(id)arg1 ;
-(id)initWithBaskets:(id)arg0 ;
-(id)minePatternsWithMinSupport:(NSUInteger)arg0 constrainedToPatternsWithTypes:(id)arg1 ;
-(id)supportOfItemIndexSet:(id)arg0 ;
-(void)terminateEarly;


@end


#endif