// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMSERIESMAPPER_H
#define EMSERIESMAPPER_H



#import "CMMapper.h"

@interface EMSeriesMapper : CMMapper



-(BOOL)useSecondaryAxis;
-(float)markerWidth;
-(float)offset;
-(float)strokeWidth;
-(id)values;
-(struct CGColor *)fillColor;
-(struct CGColor *)markerColor;
-(struct CGColor *)strokeColor;
-(unsigned int)chartType;
-(unsigned int)markerType;


@end


#endif