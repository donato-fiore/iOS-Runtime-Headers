// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUINAVIGATIONBAR_H
#define SPUINAVIGATIONBAR_H

@class UINavigationBar, SearchUISeparatorView;



@interface SPUINavigationBar : UINavigationBar

@property (retain) SearchUISeparatorView *topDividerView; // ivar: _topDividerView


+(BOOL)_supportsCanvasView;
-(BOOL)isLocked;
-(id)_popNavigationItemWithTransition:(int)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didAddSubview:(id)arg0 ;
-(void)didMoveToWindow;
-(void)performShowSeparator:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)pushNavigationItem:(id)arg0 ;
-(void)showSeparator:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateBackgroundViewVisibility;


@end


#endif