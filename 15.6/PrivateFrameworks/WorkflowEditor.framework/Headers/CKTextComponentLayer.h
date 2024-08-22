// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTCOMPONENTLAYER_H
#define CKTEXTCOMPONENTLAYER_H



#import "CKAsyncLayer.h"
#import "CKTextComponentLayerHighlighter.h"
#import "CKTextKitRenderer.h"

@interface CKTextComponentLayer : CKAsyncLayer {
    CKTextComponentLayerHighlighter *_highlighter;
}


@property (readonly, nonatomic) CKTextComponentLayerHighlighter *highlighter;
@property (retain, nonatomic) CKTextKitRenderer *renderer; // ivar: _renderer


+(id)defaultValueForKey:(id)arg0 ;
+(void)drawInContext:(struct CGContext *)arg0 parameters:(id)arg1 ;
-(id)drawParameters;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg0 ;
-(void)didDisplayAsynchronously:(id)arg0 withDrawParameters:(id)arg1 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)layoutSublayers;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg0 ;


@end


#endif