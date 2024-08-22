// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUHISTOGRAMCALCULATOR_H
#define NUHISTOGRAMCALCULATOR_H


#import <Foundation/Foundation.h>


@interface NUHistogramCalculator : NSObject

@property (nonatomic) NSInteger binCount; // ivar: _binCount
@property (nonatomic) ? colorMatrix; // ivar: _colorMatrix
@property (nonatomic) ? range; // ivar: _range


-(id)_computeHistogramForBufferBGRA8:(id)arg0 error:(*id)arg1 ;
-(id)_computeHistogramForBufferRGBAhHLG:(id)arg0 error:(*id)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif