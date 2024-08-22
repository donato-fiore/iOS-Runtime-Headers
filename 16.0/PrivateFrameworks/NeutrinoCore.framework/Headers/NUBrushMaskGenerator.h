// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUBRUSHMASKGENERATOR_H
#define NUBRUSHMASKGENERATOR_H

@class CIFilter, NSNumber, NSArray;



@interface NUBrushMaskGenerator : CIFilter

@property (retain, nonatomic) NSNumber *inputClosed; // ivar: _inputClosed
@property (retain, nonatomic) NSNumber *inputOpacity; // ivar: _inputOpacity
@property (retain, nonatomic) NSArray *inputPoints; // ivar: _inputPoints
@property (retain, nonatomic) NSNumber *inputPressureMode; // ivar: _inputPressureMode
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: _inputRadius
@property (retain, nonatomic) NSNumber *inputSoftness; // ivar: _inputSoftness
@property (retain, nonatomic) NSNumber *inputTiled; // ivar: _inputTiled


-(id)_applyOpacity:(CGFloat)arg0 toMask:(id)arg1 ;
-(id)outputImage;
-(void)setDefaults;


@end


#endif