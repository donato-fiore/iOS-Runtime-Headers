// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGLOBALAPPSCORESUTIL_H
#define ATXGLOBALAPPSCORESUTIL_H


#import <Foundation/Foundation.h>


@interface ATXGlobalAppScoresUtil : NSObject



+(id)getContextKeyForTimeOfDayIndex:(int)arg0 dayOfWeekIndex:(int)arg1 locationIndex:(int)arg2 bundleIdIndex:(int)arg3 ;
+(id)initializeTrieAtPath:(id)arg0 ;
+(id)loadCoreMLModelWithName:(id)arg0 ;
+(id)normalizeValues:(id)arg0 ;
+(int)dayOfWeekIndexFromDate:(id)arg0 ;
+(int)locationTypeIndexFromRTLocationOfInterestType:(NSInteger)arg0 ;
+(int)timeOfDayIndexFromDate:(id)arg0 ;


@end


#endif