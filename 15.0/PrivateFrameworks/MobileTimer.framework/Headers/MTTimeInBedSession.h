// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMEINBEDSESSION_H
#define MTTIMEINBEDSESSION_H

@class NSString, NSDate, NSArray, NSDictionary;
@protocol MTSleepSession;

#import <Foundation/Foundation.h>


@interface MTTimeInBedSession : NSObject <MTSleepSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) NSUInteger endReason; // ivar: _endReason
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *intervals; // ivar: _intervals
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) BOOL needsAdditionalProcessing; // ivar: _needsAdditionalProcessing
@property (readonly, nonatomic) NSInteger sampleType;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)timeInBedSessionWithStartDate:(id)arg0 endDate:(id)arg1 intervals:(id)arg2 endReason:(NSUInteger)arg3 metadata:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 intervals:(id)arg2 endReason:(NSUInteger)arg3 metadata:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif