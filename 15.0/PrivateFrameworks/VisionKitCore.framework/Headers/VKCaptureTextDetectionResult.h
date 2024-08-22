// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCAPTURETEXTDETECTIONRESULT_H
#define VKCAPTURETEXTDETECTIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VKQuad.h"

@interface VKCaptureTextDetectionResult : NSObject

@property (readonly, nonatomic) CGRect _imageBounds; // ivar: __imageBounds
@property (readonly, nonatomic) CGFloat baselineAngle; // ivar: _baselineAngle
@property (readonly, nonatomic) NSArray *blockQuads; // ivar: _blockQuads
@property (readonly, nonatomic) CGRect boundingBox;
@property (readonly, nonatomic) VKQuad *boundingQuad; // ivar: _boundingQuad
@property (readonly, nonatomic) NSArray *lineQuads; // ivar: _lineQuads
@property (readonly, nonatomic) NSArray *normalizedLineQuads; // ivar: _normalizedLineQuads


-(id)boundingPathWithPadding:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 ;
-(id)groupedPath;
-(id)groupedPathForLinesWithPadding:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 ;
-(id)initWithBlock:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)initWithBlocks:(id)arg0 imageSize:(struct CGSize )arg1 ;


@end


#endif