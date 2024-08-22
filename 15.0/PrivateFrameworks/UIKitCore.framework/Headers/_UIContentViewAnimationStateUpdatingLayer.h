// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTENTVIEWANIMATIONSTATEUPDATINGLAYER_H
#define _UICONTENTVIEWANIMATIONSTATEUPDATINGLAYER_H

@class CALayer;



@interface _UIContentViewAnimationStateUpdatingLayer : CALayer {
    id *_progressHandler;
}


@property (nonatomic) CGFloat progress; // ivar: _progress


+(BOOL)needsDisplayForKey:(id)arg0 ;
// +(id)layerForView:(id)arg0 withUpdateHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)initWithLayer:(id)arg0 ;
-(void)animationCompletedWithPosition:(NSInteger)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif