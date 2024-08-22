// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BARBUTTON_H
#define BARBUTTON_H

@class UIButton;



@interface BarButton : UIButton

@property (nonatomic) CGRect barButtonHitRect; // ivar: _barButtonHitRect
@property (nonatomic) BOOL shouldRespectContextMenuOrdering; // ivar: _shouldRespectContextMenuOrdering


+(id)sidebarButtonWithPrimaryAction:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(struct CGRect )_selectedIndicatorBounds;


@end


#endif