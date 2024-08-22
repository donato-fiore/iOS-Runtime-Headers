// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDAUTOSUCACHE_H
#define _CDAUTOSUCACHE_H

@class NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface _CDAutoSuCache : NSObject

@property (retain) NSDictionary *predictedSleep; // ivar: _predictedSleep
@property (retain) NSDate *predictedSleepValidityEndDate; // ivar: _predictedSleepValidityEndDate
@property (retain) NSDate *predictedSleepValidityStartDate; // ivar: _predictedSleepValidityStartDate


+(id)sharedCache;
-(id)cachedPredictedSleepDictionaryForDate:(id)arg0 ;
-(void)clear;
-(void)setCachedPredictedSleepDictionary:(id)arg0 validityStartDate:(id)arg1 validityEndDate:(id)arg2 ;


@end


#endif