// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODESCORINGSESSIONRANGE_H
#define ATXMODESCORINGSESSIONRANGE_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface ATXModeScoringSessionRange : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSArray *sessions; // ivar: _sessions
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)_areTimesClose:(id)arg0 secondTime:(id)arg1 ;
-(BOOL)_shouldCoaleseNextSession:(id)arg0 currentBuffer:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)attachAppLaunches;
-(void)coalesceSessions;
-(void)filterSessions;
-(void)populateInitialSessionsFromScreenTransitions;


@end


#endif