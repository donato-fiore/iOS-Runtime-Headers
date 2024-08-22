// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUICOLORBOXES_H
#define PBUICOLORBOXES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBUIColorBoxes : NSObject <NSSecureCoding>

 {
    CGSize _imageSize;
    unsigned char _totalContrast8;
    NSUInteger _downsampledBoxSize;
    NSUInteger _effectiveDownsampleFactor;
    NSUInteger _pixelHeight;
    NSUInteger _pixelWidth;
    *? _colorBoxesRowMajor;
    NSUInteger _rowCount;
    NSUInteger _columnCount;
    NSUInteger _size;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif