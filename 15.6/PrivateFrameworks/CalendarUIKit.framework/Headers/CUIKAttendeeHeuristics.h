// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKATTENDEEHEURISTICS_H
#define CUIKATTENDEEHEURISTICS_H


#import <Foundation/Foundation.h>


@interface CUIKAttendeeHeuristics : NSObject



+(id)_participantRoleSortPriority;
+(id)_participantStatusSortPriority;
+(id)sortedHumanAttendeesForEvent:(id)arg0 includeResources:(BOOL)arg1 includeMe:(BOOL)arg2 ;
+(id)sortedHumanAttendeesToDisplayForEvent:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif