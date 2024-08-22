// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTSPEEDMETRIC_H
#define NPTSPEEDMETRIC_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPTSpeedMetric : NSObject <NSCopying, NSSecureCoding>

 {
    CGFloat privateSpeed;
}


@property (nonatomic) NSInteger bytesTransferred; // ivar: _bytesTransferred
@property (retain, nonatomic) NSDate *pointInTime; // ivar: _pointInTime
@property (nonatomic) NSInteger responsiveness; // ivar: _responsiveness
@property (nonatomic) CGFloat timeSinceStart; // ivar: _timeSinceStart
@property (nonatomic) NSInteger totalBytesExpected; // ivar: _totalBytesExpected


+(BOOL)supportsSecureCoding;
-(CGFloat)speed;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPointInTime:(id)arg0 timeSinceStart:(CGFloat)arg1 bytesTransferred:(NSInteger)arg2 totalBytesExpected:(NSInteger)arg3 ;
-(id)initWithPointInTime:(id)arg0 timeSinceStart:(CGFloat)arg1 bytesTransferred:(NSInteger)arg2 totalBytesExpected:(NSInteger)arg3 speed:(CGFloat)arg4 responsiveness:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif