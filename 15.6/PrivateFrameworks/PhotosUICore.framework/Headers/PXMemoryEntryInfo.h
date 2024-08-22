// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORYENTRYINFO_H
#define PXMEMORYENTRYINFO_H

@class NSDate, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXMemoryEntryInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSArray *memories; // ivar: _memories
@property (readonly, nonatomic) NSDate *representativeDate; // ivar: _representativeDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(NSInteger)compareMemoryInfo:(id)arg0 byRelevanceScoreToMemoryInfo:(id)arg1 ;
+(NSInteger)compareMemoryInfo:(id)arg0 toMemoryInfo:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)indexOfMemory:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entryByAddingMemory:(id)arg0 ;
-(id)entryByRemovingMemory:(id)arg0 ;
-(id)entryByReplacingMemoryInfoAtIndex:(NSInteger)arg0 withMemoryInfo:(id)arg1 ;
-(id)initWithMemories:(id)arg0 ;
-(id)initWithSortedMemories:(id)arg0 ;


@end


#endif