// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTMOTIONACTIVITY_H
#define RTMOTIONACTIVITY_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTMotionActivity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger confidence; // ivar: _confidence
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)motionActivityConfidenceToString:(NSUInteger)arg0 ;
+(id)motionActivityTypeToString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 confidence:(NSUInteger)arg1 startDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif