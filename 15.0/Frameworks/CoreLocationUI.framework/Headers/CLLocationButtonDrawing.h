// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLLOCATIONBUTTONDRAWING_H
#define CLLOCATIONBUTTONDRAWING_H

@class UISSlotStyle, NSString, UISVectorGlyphDrawing, UISTextLineDrawing;
@protocol UISDrawing;

#import <Foundation/Foundation.h>

#import "CLLocationButtonTag.h"

@interface CLLocationButtonDrawing : NSObject <UISDrawing>

 {
    CLLocationButtonTag *_currentTag;
    UISSlotStyle *_style;
    BOOL _remote;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize drawingSize;
@property (nonatomic) CGSize engravedSize; // ivar: _engravedSize
@property (retain, nonatomic) UISVectorGlyphDrawing *glyphDrawing; // ivar: _glyphDrawing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) CGSize neededSize; // ivar: _neededSize
@property (readonly) Class superclass;
@property (retain, nonatomic) UISTextLineDrawing *textDrawing; // ivar: _textDrawing


+(id)_drawingWithStyle:(id)arg0 tag:(id)arg1 remote:(BOOL)arg2 ;
-(id)initWithStyle:(id)arg0 tag:(id)arg1 remote:(BOOL)arg2 ;
-(void)_computeImageMetrics;
-(void)drawInContext:(struct CGContext *)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif