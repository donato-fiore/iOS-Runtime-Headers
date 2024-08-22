// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPFLATVIDEOOVERLAYBUTTON_H
#define RPFLATVIDEOOVERLAYBUTTON_H

@class UIButton;
@protocol RPVideoOverlayButton;



@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton>

 {
    NSInteger _style;
}


@property (nonatomic) SEL action; // ivar: _action
@property (weak, nonatomic) id *target; // ivar: _target


-(NSInteger)style;
-(id)_createOverlayImageWithBackgroundWhite:(CGFloat)arg0 backgroundAlpha:(CGFloat)arg1 glyphAlpha:(CGFloat)arg2 ;
-(id)_highlightedButtonImage;
-(id)_normalButtonImage;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_handleTap:(id)arg0 ;


@end


#endif