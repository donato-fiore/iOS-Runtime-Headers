// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSECURELOCATION_H
#define SPSECURELOCATION_H

@class NSString, NSNumber, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPSecureLocation : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) CGFloat course; // ivar: _course
@property (copy, nonatomic) NSString *findMyId; // ivar: _findMyId
@property (copy, nonatomic) NSNumber *floor; // ivar: _floor
@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (copy, nonatomic) NSString *locationLabel; // ivar: _locationLabel
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) NSInteger motionActivityState; // ivar: _motionActivityState
@property (nonatomic) NSInteger publishReason; // ivar: _publishReason
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat verticalAccuracy; // ivar: _verticalAccuracy


+(BOOL)supportsSecureCoding;
+(id)_stringFromMotionState:(NSInteger)arg0 ;
+(id)_stringFromPublishReason:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif