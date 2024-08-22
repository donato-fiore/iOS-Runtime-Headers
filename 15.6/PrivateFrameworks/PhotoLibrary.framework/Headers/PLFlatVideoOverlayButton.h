// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFLATVIDEOOVERLAYBUTTON_H
#define PLFLATVIDEOOVERLAYBUTTON_H

@class UIButton;
@protocol PLVideoOverlayButton;



@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton>

 {
    NSInteger _style;
    id *_target;
    SEL _action;
}




-(NSInteger)style;
-(id)_createOverlayImageWithBackgroundWhite:(CGFloat)arg0 backgroundAlpha:(CGFloat)arg1 glyphAlpha:(CGFloat)arg2 ;
-(id)_highlightedButtonImage;
-(id)_normalButtonImage;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif