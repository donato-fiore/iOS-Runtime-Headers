// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUVIEWGEOMETRY_H
#define NUVIEWGEOMETRY_H


#import <Foundation/Foundation.h>


@interface NUViewGeometry : NSObject

@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) CGFloat backingScale; // ivar: _backingScale
@property (readonly, nonatomic) CGRect boundingCropRect;
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (nonatomic, getter=isFlipped) BOOL flipped; // ivar: _flipped
@property (readonly, nonatomic) CGRect imageBounds;
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) CGFloat maximumScale; // ivar: _maximumScale
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (readonly, nonatomic) CGSize viewImageSize;


-(id)init;
-(struct CGRect )insetBoundsForCrop:(struct CGRect )arg0 inBounds:(struct CGRect )arg1 inFrame:(struct CGRect )arg2 ;
-(struct CGRect )proposedBoundsForBounds:(struct CGRect )arg0 inFrame:(struct CGRect )arg1 ;
-(struct UIEdgeInsets )contentInsetsWithScale:(CGFloat)arg0 ;


@end


#endif