// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMANALYTICSEVENT_H
#define CAMANALYTICSEVENT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CAMAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_eventMap; // ivar: __eventMap
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(CGFloat)bucketedPowerOf2ForValue:(CGFloat)arg0 allowZero:(BOOL)arg1 minPositiveValue:(CGFloat)arg2 maxValue:(CGFloat)arg3 ;
+(CGFloat)gigabytesForBytes:(NSInteger)arg0 ;
+(id)bucketedGigabytesStringForBytes:(NSInteger)arg0 ;
+(id)bucketedGigabytesStringForBytes:(NSInteger)arg0 allowZero:(BOOL)arg1 minPositiveValue:(CGFloat)arg2 maxValue:(CGFloat)arg3 ;
+(id)durationRangeStringForDuration:(CGFloat)arg0 ;
-(id)init;
-(id)initWithEvent:(id)arg0 ;
-(void)publish;


@end


#endif