// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPLANEEXTENT_H
#define ARPLANEEXTENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARPlaneExtent : NSObject <NSSecureCoding>



@property (nonatomic) float height; // ivar: _height
@property (nonatomic) float rotationOnYAxis; // ivar: _rotationOnYAxis
@property (nonatomic) float width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif