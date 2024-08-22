// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTCURVEDMETADATA_H
#define NTKUPNEXTCURVEDMETADATA_H

@class UIImage;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKUpNextCurvedMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat angle; // ivar: _angle
@property (readonly, nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) UIImage *maskImage; // ivar: _maskImage
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRadius:(CGFloat)arg0 angle:(CGFloat)arg1 center:(struct CGPoint )arg2 maskImage:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif