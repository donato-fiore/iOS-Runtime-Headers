// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCURSIVETEXTPATH_H
#define SBCURSIVETEXTPATH_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SBCursiveTextPath : NSObject {
    CGFloat _initialWeight;
    CGFloat _finalWeight;
    CGFloat _rampTime;
    CGFloat _length;
    CGFloat _duration;
    CGRect _boundingBoxOfPath;
    NSDictionary *_pathDefinition;
    NSInteger _resolution;
}




-(CGFloat)duration;
-(id)_float4FromArray;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 resolution:(NSInteger)arg1 ;
-(struct CGAffineTransform )transformForRect:(struct CGRect )arg0 pointSize:(CGFloat)arg1 flipped:(BOOL)arg2 ;
-(struct CGPath *)pathForFraction:(CGFloat)arg0 calculateLength:(BOOL)arg1 ;
-(struct CGPath *)pathForTime:(CGFloat)arg0 ;


@end


#endif