// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIASCIIARTFRAMESRENDERER_H
#define _UIASCIIARTFRAMESRENDERER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIASCIIArtFramesRenderer : NSObject {
    NSArray *_frames;
    CGFloat _outputLineWidth;
}


@property (readonly, nonatomic) NSArray *frames;
@property (readonly, nonatomic) CGFloat outputLineWidth;


-(id)_normalizeFrames:(id)arg0 ;
-(id)description;
-(id)initWithFrames:(id)arg0 ;
-(id)initWithFrames:(id)arg0 outputLineWidth:(CGFloat)arg1 ;
-(id)renderedLines;
-(id)visualDescription;
-(struct CGRect )scaledRectForRect:(struct CGRect )arg0 scaleSize:(struct CGSize )arg1 ;


@end


#endif