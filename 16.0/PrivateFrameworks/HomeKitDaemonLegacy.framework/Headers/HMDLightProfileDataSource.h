// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLIGHTPROFILEDATASOURCE_H
#define HMDLIGHTPROFILEDATASOURCE_H

@class HMFObject, NSDate, NSString, NSTimeZone, NSDictionary;
@protocol HMDLightProfileDataSource;



@interface HMDLightProfileDataSource : HMFObject <HMDLightProfileDataSource>



@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSTimeZone *localTimeZone;
@property (readonly) NSDictionary *naturalLightingCurveResourceFileContent;
@property (readonly) CGFloat naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property (readonly) CGFloat naturalLightingCurveUpdateInterval;
@property (readonly) NSInteger naturalLightingEnabledMaxRetryCount;
@property (readonly) CGFloat naturalLightingEnabledRetryInterval;
@property (readonly) Class superclass;


-(NSUInteger)millisecondsElapsedSinceStartOfDayWithDate:(id)arg0 timeZone:(id)arg1 ;
-(void)dispatchAfterTimeInterval:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;


@end


#endif