// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVSTABILIZATIONCONFIG_H
#define PVSTABILIZATIONCONFIG_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PVStabilizationConfig : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGRect cleanAperture; // ivar: _cleanAperture
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (nonatomic) int fillMode; // ivar: _fillMode
@property (nonatomic) ? homography; // ivar: _homography
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) CGRect normalizedCleanAperture;


+(BOOL)supportsSecureCoding;
+(id)configWithHomography:(struct ? )arg0 cleanAperture:(struct CGRect )arg1 cropRect:(struct CGRect )arg2 fillMode:(int)arg3 ;
-(BOOL)isValidWithReason:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomography:(struct ? )arg0 cleanAperture:(struct CGRect )arg1 cropRect:(struct CGRect )arg2 fillMode:(int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif