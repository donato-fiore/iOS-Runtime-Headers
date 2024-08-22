// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PICURVESLUTFILTER_H
#define PICURVESLUTFILTER_H

@class CIFilter, NSArray;



@interface PICurvesLUTFilter : CIFilter

@property (retain) NSArray *inputPointsB; // ivar: _inputPointsB
@property (retain) NSArray *inputPointsG; // ivar: _inputPointsG
@property (retain) NSArray *inputPointsL; // ivar: _inputPointsL
@property (retain) NSArray *inputPointsR; // ivar: _inputPointsR


+(id)curvePointsFromDictionaries:(id)arg0 ;
+(id)tableImageFromRed:(*float)arg0 green:(*float)arg1 blue:(*float)arg2 luminance:(*float)arg3 ;
+(struct vector<float, std::allocator<float>> )calculateCurveTable:(id)arg0 ;
-(id)outputImage;


@end


#endif