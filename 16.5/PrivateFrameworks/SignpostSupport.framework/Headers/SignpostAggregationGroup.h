// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTAGGREGATIONGROUP_H
#define SIGNPOSTAGGREGATIONGROUP_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SignpostAggregation.h"

@interface SignpostAggregationGroup : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) CGFloat countPerMs;
@property (readonly, nonatomic) CGFloat countPerNs;
@property (readonly, nonatomic) CGFloat countPerSecond;
@property (readonly, nonatomic) NSString *countUnit; // ivar: _countUnit
@property (retain, nonatomic) NSDictionary *durationTypeToDurationDict; // ivar: _durationTypeToDurationDict
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) SignpostAggregation *parentAggregation; // ivar: _parentAggregation
@property (readonly, nonatomic) BOOL telemetryEnabled; // ivar: _telemetryEnabled


+(id)_sumOfGroup1:(id)arg0 group2:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_addGroup:(id)arg0 ;
-(id)_coreAnalyticsFieldName;
-(id)_dictionaryRepresentation;
-(id)_initWithMetadataSegment:(id)arg0 errorOut:(*id)arg1 ;
-(id)_initWithName:(id)arg0 count:(NSUInteger)arg1 countUnit:(id)arg2 telemetryEnabled:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addToPayloadDictionary:(id)arg0 ;


@end


#endif