// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPAGERENDERMEASUREMENT_H
#define MTPAGERENDERMEASUREMENT_H

@class NSArray, NSString;
@protocol MTPageRenderMeasurementData;


#import "MTPerfBaseMeasurement.h"

@interface MTPageRenderMeasurement : MTPerfBaseMeasurement <MTPageRenderMeasurementData>



@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pageContext;
@property (copy, nonatomic) NSString *pageContext; // ivar: _pageContext
@property (readonly, copy, nonatomic) NSString *pageId;
@property (copy, nonatomic) NSString *pageId; // ivar: _pageId
@property (readonly, copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *pageType; // ivar: _pageType
@property (readonly) Class superclass;


-(id)initWithMeasurementTransformer:(id)arg0 pageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4 ;
-(void)mark:(id)arg0 ;
-(void)mark:(id)arg0 date:(id)arg1 ;
-(void)mark:(id)arg0 time:(NSInteger)arg1 ;
-(void)setAppLaunch:(BOOL)arg0 ;
-(void)setLaunchCorrelationKey:(id)arg0 ;
-(void)setPreloadStatus:(id)arg0 ;
-(void)setPrimaryDataResponseCached:(BOOL)arg0 ;
-(void)setXpSamplingForced:(BOOL)arg0 ;
-(void)setXpSamplingPercentageUsers:(CGFloat)arg0 ;
-(void)setXpSessionDuration:(NSUInteger)arg0 ;


@end


#endif