// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLIMAGECONSTRAINT_H
#define MLIMAGECONSTRAINT_H

@protocol MLFeatureValueConstraint, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLImageSizeConstraint.h"

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>



@property (readonly) NSUInteger imageHeight;
@property (readonly) NSUInteger imageWidth;
@property (readonly) unsigned int osType;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly) NSUInteger pixelType; // ivar: _pixelType
@property (readonly, nonatomic) NSInteger pixelsHigh; // ivar: _pixelsHigh
@property (readonly, nonatomic) NSInteger pixelsWide; // ivar: _pixelsWide
@property (readonly, nonatomic) MLImageSizeConstraint *sizeConstraint; // ivar: _sizeConstraint


+(BOOL)osType:(unsigned int)arg0 isAcceptedForPixelType:(NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)imagePixelTypeFromOSType:(unsigned int)arg0 ;
+(id)_stringForOSType:(unsigned int)arg0 ;
+(id)constraintWithPixelsWide:(NSInteger)arg0 pixelsHigh:(NSInteger)arg1 pixelType:(NSUInteger)arg2 ;
+(id)constraintWithPixelsWide:(NSInteger)arg0 pixelsHigh:(NSInteger)arg1 pixelType:(NSUInteger)arg2 sizeConstraint:(id)arg3 ;
-(BOOL)isAllowedValue:(id)arg0 error:(*id)arg1 ;
-(id)_stringForAllowedOSTypes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPixelsWide:(NSInteger)arg0 pixelsHigh:(NSInteger)arg1 pixelType:(NSUInteger)arg2 sizeConstraint:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif