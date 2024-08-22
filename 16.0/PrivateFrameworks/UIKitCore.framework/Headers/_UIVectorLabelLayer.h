// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVECTORLABELLAYER_H
#define _UIVECTORLABELLAYER_H

@class CALayer, NSArray, NSString;
@protocol CALayerDelegate, CAAnimationDelegate;


#import "_UIVectorTextLayout.h"

@interface _UIVectorLabelLayer : CALayer <CALayerDelegate, CAAnimationDelegate>

 {
    NSArray *_currentLayers;
    _UIVectorTextLayout *_currentTextLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxRenderedMoveDistance; // ivar: _maxRenderedMoveDistance
@property (readonly) Class superclass;
@property (copy, nonatomic) _UIVectorTextLayout *textLayout;


+(void)initialize;
-(BOOL)_isPathCompatible:(struct CGPath *)arg0 with:(struct CGPath *)arg1 ;
-(id)_findSimilarLayer:(id)arg0 inLayers:(id)arg1 ;
-(id)_layersForTextLayout:(id)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)_applyTextLayoutChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_cleanupUnusedLayers;
// -(void)_transitionWithSetup:(id)arg0 target:(unk)arg1  ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)willChangeValueForKey:(id)arg0 ;


@end


#endif