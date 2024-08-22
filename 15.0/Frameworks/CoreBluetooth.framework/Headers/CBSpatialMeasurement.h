// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBSPATIALMEASUREMENT_H
#define CBSPATIALMEASUREMENT_H

@class NSError, NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBSpatialMeasurement : NSObject <CUXPCCodable>



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


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif