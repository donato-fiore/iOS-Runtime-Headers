// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRPERFORMANCESTATISTICS_H
#define CRPERFORMANCESTATISTICS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CRPerformanceStatistics : NSObject

@property (readonly) BOOL measureRecentPeak; // ivar: _measureRecentPeak
@property (retain) NSDictionary *metrics; // ivar: _metrics
@property (retain) NSString *name; // ivar: _name


+(BOOL)_canEnableRecentPeakReset;
-(id)description;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 measureRecentPeak:(BOOL)arg1 ;
-(id)initWithStatistics:(id)arg0 ;
-(void)_addMetricWithKey:(id)arg0 name:(id)arg1 unit:(id)arg2 denominator:(CGFloat)arg3 pcMetricID:(NSUInteger)arg4 ;
-(void)_evaluateEndedSession:(struct pc_session *)arg0 duration:(CGFloat)arg1 ;
-(void)addStatistics:(id)arg0 ;
-(void)measureBlock:(id)arg0 ;


@end


#endif