// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCROPVARIANT_H
#define PHCROPVARIANT_H


#import <Foundation/Foundation.h>


@interface PHCropVariant : NSObject

@property (readonly, nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic) CGFloat cropScore; // ivar: _cropScore
@property (readonly, nonatomic) NSInteger cropType; // ivar: _cropType
@property (readonly, nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor


-(id)initWithCrop:(struct CGRect )arg0 cropType:(NSInteger)arg1 scaleFactor:(CGFloat)arg2 cropScore:(CGFloat)arg3 ;


@end


#endif