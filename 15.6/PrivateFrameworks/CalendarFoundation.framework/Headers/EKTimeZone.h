// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKTIMEZONE_H
#define EKTIMEZONE_H

@class NSTimeZone;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKTimeZone : NSObject <NSCopying>



@property (retain, nonatomic) NSTimeZone *nsTimeZone; // ivar: _nsTimeZone


+(id)timeZoneWithNSTimeZone:(id)arg0 ;
+(id)timeZoneWithName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(CGFloat)arg0 ;
-(CGFloat)secondsFromGMTForAbsoluteTime:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)NSTimeZone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithNSTimeZone:(id)arg0 ;


@end


#endif