// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSALWAYSONTIMELINE_H
#define BLSALWAYSONTIMELINE_H

@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface BLSAlwaysOnTimeline : NSObject {
    id *_configureEntryBlock;
}


@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *identifier; // ivar: _identifier


+(id)coalesceSpecifiers:(id)arg0 forDateInterval:(id)arg1 framesPerSecond:(CGFloat)arg2 previousSpecifier:(id)arg3 ;
+(id)coalescedSpecifierFromEnumerator:(id)arg0 forDateInterval:(id)arg1 framesPerSecond:(CGFloat)arg2 previousSpecifier:(id)arg3 ;
+(id)constructFrameSpecifiersForTimelines:(id)arg0 dateInterval:(id)arg1 shouldConstructStartSpecifier:(BOOL)arg2 framesPerSecond:(CGFloat)arg3 previousSpecifier:(id)arg4 ;
+(id)emptyTimelineWithIdentifier:(id)arg0 ;
+(id)everyMinuteTimelineWithIdentifier:(id)arg0 configure:(id)arg1 ;
+(id)timelineWithEntries:(id)arg0 identifier:(id)arg1 configure:(id)arg2 ;
+(id)timelineWithPerMinuteUpdateFrequency:(NSInteger)arg0 identifier:(id)arg1 configure:(id)arg2 ;
+(id)timelineWithUpdateInterval:(CGFloat)arg0 startDate:(id)arg1 identifier:(id)arg2 configure:(id)arg3 ;
+(id)uncoalescedFrameSpecifiersForTimelines:(id)arg0 dateInterval:(id)arg1 shouldConstructStartSpecifier:(BOOL)arg2 framesPerSecond:(CGFloat)arg3 previousSpecifier:(id)arg4 ;
+(struct _NSRange )rangeOfEntries:(id)arg0 forDateInterval:(id)arg1 shouldIncludePrevious:(BOOL)arg2 ;
-(NSInteger)requestedFidelityForStartEntryInDateInterval:(id)arg0 withPreviousEntry:(id)arg1 ;
-(id)configureEntry:(id)arg0 previousEntry:(id)arg1 ;
-(id)configuredEntriesForDateInterval:(id)arg0 previousEntry:(id)arg1 shouldConstructStartEntry:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg0 configure:(id)arg1 ;
-(id)unconfiguredEntriesForDateInterval:(id)arg0 previousEntry:(id)arg1 ;


@end


#endif