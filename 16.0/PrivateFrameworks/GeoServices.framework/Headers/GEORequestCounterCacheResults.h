// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOREQUESTCOUNTERCACHERESULTS_H
#define GEOREQUESTCOUNTERCACHERESULTS_H

@class NSString, NSDate, NSDateInterval;
@protocol GEORequestCounterCacheResults, GEOXPCSerializable;

#import <Foundation/Foundation.h>


@interface GEORequestCounterCacheResults : NSObject <GEORequestCounterCacheResults, GEOXPCSerializable>



@property (readonly, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appId; // ivar: _appId
@property (readonly, nonatomic) unsigned int cacheExpiredCount;
@property (nonatomic) unsigned int cacheExpiredCount; // ivar: _cacheExpiredCount
@property (readonly, nonatomic) unsigned int cacheHitCount;
@property (nonatomic) unsigned int cacheHitCount; // ivar: _cacheHitCount
@property (readonly, nonatomic) unsigned int cacheMissCount;
@property (nonatomic) unsigned int cacheMissCount; // ivar: _cacheMissCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) int requestKindRaw; // ivar: _requestKindRaw
@property (readonly, nonatomic) int requestType;
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDateInterval *timeRange;


-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif