// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CURANGINGMEASUREMENT_H
#define CURANGINGMEASUREMENT_H

@class NSError, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CURangingMeasurement : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat distanceError; // ivar: _distanceError
@property (nonatomic) CGFloat distanceMeters; // ivar: _distanceMeters
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) CGFloat horizontalAngle; // ivar: _horizontalAngle
@property (nonatomic) CGFloat horizontalError; // ivar: _horizontalError
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat ptsScore; // ivar: _ptsScore
@property (nonatomic) NSUInteger timestampTicks; // ivar: _timestampTicks
@property (nonatomic) CGFloat verticalAngle; // ivar: _verticalAngle
@property (nonatomic) CGFloat verticalError; // ivar: _verticalError


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif