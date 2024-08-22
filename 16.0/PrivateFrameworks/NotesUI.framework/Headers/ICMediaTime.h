// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMEDIATIME_H
#define ICMEDIATIME_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICMediaTime : NSObject <NSCopying>



@property (nonatomic) unsigned char days; // ivar: _days
@property (readonly, nonatomic) NSString *durationDescription;
@property (nonatomic) unsigned char hours; // ivar: _hours
@property (readonly, nonatomic) BOOL isZero;
@property (nonatomic) unsigned char minutes; // ivar: _minutes
@property (nonatomic, getter=isNegative) BOOL negative; // ivar: _negative
@property (nonatomic) unsigned char seconds; // ivar: _seconds


-(BOOL)isEqualToMediaTime:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCMTime:(struct ? )arg0 ;
-(id)initWithSeconds:(CGFloat)arg0 ;


@end


#endif