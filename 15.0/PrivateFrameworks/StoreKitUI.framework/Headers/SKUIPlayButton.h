// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPLAYBUTTON_H
#define SKUIPLAYBUTTON_H

@class NSString;


#import "SKUIPlayButtonControl.h"
#import "SKUIPlayButtonImageCache.h"

@interface SKUIPlayButton : SKUIPlayButtonControl {
    BOOL _showStop;
}


@property (readonly, nonatomic) SKUIPlayButtonImageCache *imageCache; // ivar: _imageCache
@property (nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSString *mediaURLString; // ivar: _mediaURLString
@property (copy, nonatomic) NSString *playItemIdentifier; // ivar: _playItemIdentifier
@property (nonatomic, getter=isRadio) BOOL radio;
@property (nonatomic) BOOL showOnDemand; // ivar: _showOnDemand
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) BOOL useLargeButton;


+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
-(BOOL)showOuterBorder;
-(float)buttonCornerRadius;
-(id)cancelImage;
-(id)defaultBackgroundColor;
-(id)images;
-(id)outerBorderColor;
-(id)playImage;
-(struct CGSize )buttonSize;
-(void)_updateEnabledState;
-(void)layoutSubviews;
-(void)playIndicatorDidChange:(BOOL)arg0 ;
-(void)refresh;
-(void)reloadWithItemStatus:(id)arg0 animated:(BOOL)arg1 ;
-(void)setBackgroundType:(NSInteger)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif