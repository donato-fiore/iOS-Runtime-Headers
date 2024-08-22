// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSALWAYSONEXPLICITENTRIESTIMELINE_H
#define BLSALWAYSONEXPLICITENTRIESTIMELINE_H

@class NSArray;


#import "BLSAlwaysOnTimeline.h"

@interface BLSAlwaysOnExplicitEntriesTimeline : BLSAlwaysOnTimeline {
    NSArray *_explicitEntries;
}




-(NSInteger)requestedFidelityForStartEntryInDateInterval:(id)arg0 withPreviousEntry:(id)arg1 ;
-(id)initWithEntries:(id)arg0 identifier:(id)arg1 configure:(id)arg2 ;
-(id)unconfiguredEntriesForDateInterval:(id)arg0 previousEntry:(id)arg1 ;


@end


#endif