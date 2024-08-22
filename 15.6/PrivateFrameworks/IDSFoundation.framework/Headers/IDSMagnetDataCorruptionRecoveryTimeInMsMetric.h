// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSMAGNETDATACORRUPTIONRECOVERYTIMEINMSMETRIC_H
#define IDSMAGNETDATACORRUPTIONRECOVERYTIMEINMSMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSMagnetDataCorruptionRecoveryTimeInMsMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSInteger recoveryTime; // ivar: _recoveryTime
@property (readonly) Class superclass;


-(id)initWithRecoveryTime:(NSInteger)arg0 ;


@end


#endif