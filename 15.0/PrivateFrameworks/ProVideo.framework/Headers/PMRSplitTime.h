// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMRSPLITTIME_H
#define PMRSPLITTIME_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PMRSplitTime : NSObject

@property (copy, nonatomic) NSString *comment; // ivar: _comment
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSInteger level; // ivar: _level
@property (nonatomic) NSUInteger splitTime; // ivar: _splitTime
@property (copy, nonatomic) NSArray *splitTimes; // ivar: _splitTimes
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)_subtreeDescription;
-(id)description;
-(id)dumpTraceLog;
-(id)initWithKey:(id)arg0 comment:(id)arg1 level:(NSInteger)arg2 ;
-(id)initWithKey:(id)arg0 comment:(id)arg1 level:(NSInteger)arg2 duration:(NSUInteger)arg3 userInfo:(id)arg4 ;
-(void)addSplitTimesObject:(id)arg0 ;
-(void)dealloc;
-(void)removeSplitTimesObject:(id)arg0 ;


@end


#endif