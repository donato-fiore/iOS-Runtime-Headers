// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIAUTOCOMPLETETRACKER_H
#define EKUIAUTOCOMPLETETRACKER_H

@class EKCalendar, NSDate, NSTimeZone;

#import <Foundation/Foundation.h>


@interface EKUIAutocompleteTracker : NSObject {
    BOOL _hasTrackedZKWQuery;
    BOOL _hasTrackedZKWResultShown;
    BOOL _hasTrackedAutocompleteQuery;
    BOOL _hasTrackedAutocompleteResultsShown;
    BOOL _hasTrackedNLResultShown;
    BOOL _hasFinalizedTracking;
}


@property NSUInteger finalNumberOfAutocompleteResults; // ivar: _finalNumberOfAutocompleteResults
@property (retain) EKCalendar *initialCalendar; // ivar: _initialCalendar
@property (retain) NSDate *initialEndDate; // ivar: _initialEndDate
@property BOOL initialIsAllDay; // ivar: _initialIsAllDay
@property (retain) NSDate *initialStartDate; // ivar: _initialStartDate
@property (retain) NSTimeZone *initialTimeZone; // ivar: _initialTimeZone


+(BOOL)_isChangeToTrackedPropertySignificant:(NSUInteger)arg0 ;
+(BOOL)_trackedEventProperty:(NSUInteger)arg0 isPresentInAutocompleteResult:(id)arg1 ;
+(BOOL)_trackedEventProperty:(NSUInteger)arg0 wasOverriddenInEvent:(id)arg1 fromAutocompleteResult:(id)arg2 ;
+(id)propertyName:(NSUInteger)arg0 ;
-(BOOL)_trackedEventProperty:(NSUInteger)arg0 wasSetInNewEvent:(id)arg1 ;
-(void)_augmentPayload:(id)arg0 withEvent:(id)arg1 selectedResult:(id)arg2 selectedIndex:(NSUInteger)arg3 isZKW:(BOOL)arg4 ;
-(void)finalizeAutocompleteTrackingOnSave:(BOOL)arg0 withEvent:(id)arg1 selectedResult:(id)arg2 selectedIndex:(NSUInteger)arg3 isZKW:(BOOL)arg4 ;
-(void)trackAutocompleteQuery;
-(void)trackAutocompleteResultsShown;
-(void)trackNLResultShown;
-(void)trackZKWQuery;
-(void)trackZKWResultShown;


@end


#endif