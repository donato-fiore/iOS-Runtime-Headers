// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDBRUSHSTROKELAYOUTOPTIONS_H
#define TSDBRUSHSTROKELAYOUTOPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSDBrushStrokeLayoutOptions : NSObject

@property (copy, nonatomic) NSArray *patternOffsetsBySubpath; // ivar: _patternOffsetsBySubpath
@property (nonatomic) CGFloat strokeEnd; // ivar: _strokeEnd
@property (copy, nonatomic) NSArray *transparencyLayersBySubpath; // ivar: _transparencyLayersBySubpath


-(id)init;


@end


#endif