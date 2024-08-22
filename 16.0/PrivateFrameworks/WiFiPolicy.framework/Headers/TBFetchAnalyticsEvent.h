// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBFETCHANALYTICSEVENT_H
#define TBFETCHANALYTICSEVENT_H

@class NSDate, NSString, NSNumber, NSError, NSDictionary;
@protocol TBAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface TBFetchAnalyticsEvent : NSObject <TBAnalyticsEvent>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *duration; // ivar: _duration
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *requestCount; // ivar: _requestCount
@property (retain, nonatomic) NSNumber *resultCount; // ivar: _resultCount
@property (nonatomic) NSUInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *tileKey; // ivar: _tileKey
@property (nonatomic) NSUInteger trigger; // ivar: _trigger
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)fetchEventWithSource:(NSUInteger)arg0 type:(NSUInteger)arg1 trigger:(NSUInteger)arg2 duration:(id)arg3 requestCount:(id)arg4 resultCount:(id)arg5 error:(id)arg6 tileKey:(id)arg7 ;


@end


#endif