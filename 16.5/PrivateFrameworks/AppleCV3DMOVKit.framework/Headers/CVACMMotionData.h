// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVACMMOTIONDATA_H
#define CVACMMOTIONDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CVACLMotionTypeVector3.h"
#import "CVACLMotionTypeDoubleVector4.h"

@interface CVACMMotionData : NSObject <NSSecureCoding>



@property (retain, nonatomic) CVACLMotionTypeVector3 *acceleration; // ivar: _acceleration
@property (nonatomic) NSUInteger frameId; // ivar: _frameId
@property (retain, nonatomic) CVACLMotionTypeDoubleVector4 *quaternion; // ivar: _quaternion
@property (retain, nonatomic) CVACLMotionTypeVector3 *rotationRate; // ivar: _rotationRate
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif