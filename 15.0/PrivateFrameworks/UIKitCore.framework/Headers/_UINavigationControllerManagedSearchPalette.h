// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONCONTROLLERMANAGEDSEARCHPALETTE_H
#define _UINAVIGATIONCONTROLLERMANAGEDSEARCHPALETTE_H

@class UINavigationControllerPalette;


#import "UISearchBar.h"
#import "UIView.h"

@interface _UINavigationControllerManagedSearchPalette : UINavigationControllerPalette

@property (weak, nonatomic, setter=_setSearchBar:) UISearchBar *_searchBar; // ivar: __searchBar
@property (nonatomic, setter=_setShadowAlpha:) CGFloat _shadowAlpha;
@property (nonatomic) BOOL ignoreGeometryChanges; // ivar: _ignoreGeometryChanges
@property (copy, nonatomic) id *resetAfterSearchFieldFade; // ivar: _resetAfterSearchFieldFade
@property (readonly, nonatomic) UIView *viewForAsymmetricFade;


-(BOOL)_shouldUpdateBackground;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(id)_initWithNavigationController:(id)arg0 forEdge:(NSUInteger)arg1 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_popDisableLayoutFlushingForTransition;
-(void)_propagateBackgroundToContents;
-(void)_pushDisableLayoutFlushingForTransition;
-(void)_updateLayoutForCurrentConfiguration;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif