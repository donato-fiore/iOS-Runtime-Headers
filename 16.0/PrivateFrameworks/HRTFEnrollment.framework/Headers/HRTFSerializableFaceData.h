// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRTFSERIALIZABLEFACEDATA_H
#define HRTFSERIALIZABLEFACEDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HRTFSerializableFaceData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) NSInteger faceID; // ivar: _faceID
@property (readonly, nonatomic) CGFloat rollAngle; // ivar: _rollAngle
@property (readonly, nonatomic) BOOL rollAngleAvailable; // ivar: _rollAngleAvailable
@property (readonly, nonatomic) CGFloat yawAngle; // ivar: _yawAngle
@property (readonly, nonatomic) BOOL yawAngleAvailable; // ivar: _yawAngleAvailable


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif