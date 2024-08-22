// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTSPEEDMETRIC_H
#define NPTSPEEDMETRIC_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NPTSpeedMetric : NSObject <NSCopying>



@property (nonatomic) NSInteger bytesTransferred; // ivar: _bytesTransferred
@property (retain, nonatomic) NSDate *pointInTime; // ivar: _pointInTime
@property (nonatomic) CGFloat timeSinceStart; // ivar: _timeSinceStart
@property (nonatomic) NSInteger totalBytesExpected; // ivar: _totalBytesExpected


-(CGFloat)speed;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPointInTime:(id)arg0 timeSinceStart:(CGFloat)arg1 bytesTransferred:(NSInteger)arg2 totalBytesExpected:(NSInteger)arg3 ;


@end


#endif