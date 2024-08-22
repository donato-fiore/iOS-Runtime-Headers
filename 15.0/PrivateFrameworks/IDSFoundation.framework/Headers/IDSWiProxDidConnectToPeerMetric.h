// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSWIPROXDIDCONNECTTOPEERMETRIC_H
#define IDSWIPROXDIDCONNECTTOPEERMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSWiProxDidConnectToPeerMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSUInteger resultCode; // ivar: _resultCode
@property (readonly) Class superclass;


-(id)initWithDuration:(NSUInteger)arg0 resultCode:(NSUInteger)arg1 ;


@end


#endif