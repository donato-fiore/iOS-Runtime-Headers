// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDELIVERYCONTROLLERTIMEMETRIC_H
#define IDSDELIVERYCONTROLLERTIMEMETRIC_H

@class NSString, NSDictionary;
@protocol CUTRTCMetric;

#import <Foundation/Foundation.h>


@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSInteger endpointCount; // ivar: _endpointCount
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger responseCode; // ivar: _responseCode
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeToSend; // ivar: _timeToSend
@property (readonly, nonatomic) BOOL usedMMCS; // ivar: _usedMMCS
@property (readonly, nonatomic) BOOL usedPipeline; // ivar: _usedPipeline


-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 endpointCount:(NSInteger)arg2 usedPipeline:(BOOL)arg3 usedMMCS:(BOOL)arg4 responseCode:(NSInteger)arg5 ;


@end


#endif