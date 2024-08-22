// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKASYNCLAYER_H
#define CKASYNCLAYER_H

@class CALayer;



@interface CKAsyncLayer : CALayer {
    int _displaySentinel;
    BOOL _needsAsyncDisplayOnly;
}


@property NSUInteger displayMode;


+(id)asyncDisplayBlockWithBounds:(SEL)arg0 contentsScale:(struct CGRect )arg1 opaque:(CGFloat)arg2 backgroundColor:(BOOL)arg3 displaySentinel:(struct CGColor *)arg4 expectedDisplaySentinelValue:(*int)arg5 drawingDelegate:(int)arg6 drawParameters:(id)arg7 ;
+(id)defaultValueForKey:(id)arg0 ;
+(id)displayQueue;
+(void)drawAsyncLayerInContext:(struct CGContext *)arg0 parameters:(id)arg1 ;
+(void)drawInContext:(struct CGContext *)arg0 parameters:(id)arg1 ;
-(id)drawParameters;
-(id)name;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg0 ;
-(void)cancelAsyncDisplay;
-(void)didDisplayAsynchronously:(id)arg0 withDrawParameters:(id)arg1 ;
-(void)display;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setNeedsAsyncDisplay;
-(void)setNeedsDisplay;


@end


#endif