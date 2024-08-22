// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRRCOMPARATORRESULT_H
#define LRRCOMPARATORRESULT_H


#import <Foundation/Foundation.h>


@interface LRRComparatorResult : NSObject

@property (readonly, nonatomic) int comparatorName; // ivar: _comparatorName
@property (nonatomic) BOOL isMatched; // ivar: _isMatched
@property (nonatomic) BOOL isValidOriginalItem; // ivar: _isValidOriginalItem
@property (nonatomic) BOOL isValidReplayedItem; // ivar: _isValidReplayedItem


-(id)initWithComparatorName:(int)arg0 ;


@end


#endif