// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PINNEDTABSOVERFLOWBUTTON_H
#define PINNEDTABSOVERFLOWBUTTON_H

@class UIButton, UIVisualEffectView;



@interface PinnedTabsOverflowButton : UIButton {
    BOOL _hovering;
    UIVisualEffectView *_trailingSeparator;
}


@property (nonatomic) BOOL showsTrailingSeparator;
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_hover:(id)arg0 ;
-(void)_setHovering:(BOOL)arg0 ;


@end


#endif