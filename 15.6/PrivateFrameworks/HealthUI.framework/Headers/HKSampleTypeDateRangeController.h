// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSAMPLETYPEDATERANGECONTROLLER_H
#define HKSAMPLETYPEDATERANGECONTROLLER_H

@class HKHealthStore, _HKDateRangeQuery, NSHashTable, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HKSampleTypeDateRangeController : NSObject {
    HKHealthStore *_healthStore;
    _HKDateRangeQuery *_dateRangeQuery;
    NSHashTable *_observers;
    BOOL _applicationIsInForeground;
    BOOL _lastQuerySufferedError;
}


@property (readonly, nonatomic) NSDictionary *dateRangesBySampleType; // ivar: _dateRangesBySampleType
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)dateRangeForSampleType:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(void)_alertObserverDidUpdateDateRanges:(id)arg0 ;
-(void)_alertObserversDidUpdateDateRanges;
-(void)_applicationMovingToBackground:(id)arg0 ;
-(void)_applicationMovingToForeground:(id)arg0 ;
-(void)_beginUpdates;
-(void)_resultsDidUpdate:(id)arg0 ;
-(void)_updateHandlerDidReceiveError:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif