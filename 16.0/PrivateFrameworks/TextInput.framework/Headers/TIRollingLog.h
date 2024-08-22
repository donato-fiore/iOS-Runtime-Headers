// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIROLLINGLOG_H
#define TIROLLINGLOG_H

@class NSMutableArray, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TIRollingLog : NSObject <NSCopying>

 {
    NSMutableArray *_entries;
    NSUInteger _nextIndex;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSArray *currentEntries;
@property (readonly, nonatomic) NSUInteger maxCount; // ivar: _maxCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMaxCount:(NSUInteger)arg0 ;
-(void)addEntries:(id)arg0 ;
-(void)addEntry:(id)arg0 ;


@end


#endif