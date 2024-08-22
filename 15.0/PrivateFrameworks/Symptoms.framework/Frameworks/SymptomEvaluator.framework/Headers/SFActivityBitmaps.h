// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFACTIVITYBITMAPS_H
#define SFACTIVITYBITMAPS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFActivityBitmaps : NSObject {
    char _bitmapsBuffer;
}


@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property NSUInteger numOfWords; // ivar: _numOfWords
@property NSUInteger startTime; // ivar: _startTime
@property NSUInteger wordOffset; // ivar: _wordOffset


+(BOOL)adjustStartTime:(*NSUInteger)arg0 endTime:(*NSUInteger)arg1 currMachAbsTime:(*NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)adjustStartTime:(NSUInteger)arg0 ;
-(NSUInteger)getAlignedBitmapStartingAtTime:(NSUInteger)arg0 ;
-(NSUInteger)getEndTime;
-(NSUInteger)getHammingWeight;
-(NSUInteger)getLongestContiguousHammingWeight;
-(NSUInteger)getWordAtOffset:(NSUInteger)arg0 ;
-(id)description;
-(id)getWrappedBitmaps;
-(id)getWrappedBitmapsFromTime:(NSUInteger)arg0 toTime:(NSUInteger)arg1 ;
-(id)init;
-(void)addActivityWithFlowId:(NSUInteger)arg0 startTime:(NSUInteger)arg1 part1:(NSUInteger)arg2 part2:(NSUInteger)arg3 ;
-(void)clearAndSetNewActivityWithStartTime:(NSUInteger)arg0 part1:(NSUInteger)arg1 part:(NSUInteger)arg2 ;
-(void)freeUpBufferSpace;
-(void)resetAllActivities;
-(void)setActivityWithStartTime:(NSUInteger)arg0 part1:(NSUInteger)arg1 part2:(NSUInteger)arg2 ;
-(void)setAlignedBitmap:(NSUInteger)arg0 withStartTime:(NSUInteger)arg1 ;
-(void)writeWord:(NSUInteger)arg0 atOffset:(NSUInteger)arg1 ;


@end


#endif