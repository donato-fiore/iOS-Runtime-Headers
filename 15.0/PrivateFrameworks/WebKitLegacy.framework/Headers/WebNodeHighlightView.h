// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBNODEHIGHLIGHTVIEW_H
#define WEBNODEHIGHLIGHTVIEW_H

@class WAKView, NSMutableArray;


#import "WebNodeHighlight.h"

@interface WebNodeHighlightView : WAKView {
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}




-(BOOL)isFlipped;
-(id)initWithWebNodeHighlight:(id)arg0 ;
-(id)webNodeHighlight;
-(void)_attach:(id)arg0 numLayers:(NSUInteger)arg1 ;
-(void)_layoutForNodeHighlight:(*void)arg0 parent:(id)arg1 ;
-(void)_layoutForRectsHighlight:(*void)arg0 parent:(id)arg1 ;
-(void)_removeAllLayers;
-(void)dealloc;
-(void)detachFromWebNodeHighlight;
-(void)layoutSublayers:(id)arg0 ;


@end


#endif