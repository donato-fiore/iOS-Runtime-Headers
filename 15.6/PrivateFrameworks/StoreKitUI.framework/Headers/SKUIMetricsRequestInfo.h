// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMETRICSREQUESTINFO_H
#define SKUIMETRICSREQUESTINFO_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIMetricsRequestInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasResponseWasCachedValue; // ivar: _hasResponseWasCachedValue
@property (nonatomic) CGFloat requestStartTime; // ivar: _requestStartTime
@property (nonatomic) CGFloat responseEndTime; // ivar: _responseEndTime
@property (nonatomic) CGFloat responseStartTime; // ivar: _responseStartTime
@property (nonatomic) BOOL responseWasCached; // ivar: _responseWasCached


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithReportRequestTimesMessagePayload:(id)arg0 ;


@end


#endif