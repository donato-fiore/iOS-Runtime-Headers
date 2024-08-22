// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKHIGHLIGHTOVERLAYLAYER_H
#define CKHIGHLIGHTOVERLAYLAYER_H

@class CALayer, NSArray;



@interface CKHighlightOverlayLayer : CALayer {
    NSArray *_rects;
}


@property (retain) *CGColor highlightColor;
@property (weak) CALayer *targetLayer; // ivar: _targetLayer


+(BOOL)needsDisplayForKey:(id)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 ;
-(id)initWithRects:(id)arg0 ;
-(id)initWithRects:(id)arg0 targetLayer:(id)arg1 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif