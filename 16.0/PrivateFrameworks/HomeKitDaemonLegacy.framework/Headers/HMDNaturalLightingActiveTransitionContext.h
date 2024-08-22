// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNATURALLIGHTINGACTIVETRANSITIONCONTEXT_H
#define HMDNATURALLIGHTINGACTIVETRANSITIONCONTEXT_H

@class HMFObject, NSDate, NSNumber;
@protocol NSCopying;



@interface HMDNaturalLightingActiveTransitionContext : HMFObject <NSCopying>



@property (readonly) NSUInteger millisecondsElapsedSinceStartDate; // ivar: _millisecondsElapsedSinceStartDate
@property (readonly, copy) NSDate *startDate; // ivar: _startDate
@property (readonly, copy) NSNumber *transitionChecksum; // ivar: _transitionChecksum


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStartDate:(id)arg0 millisecondsElapsedSinceStartDate:(NSUInteger)arg1 transitionChecksum:(id)arg2 ;


@end


#endif