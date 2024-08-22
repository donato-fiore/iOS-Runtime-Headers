// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHBARSEARCHFIELDBACKGROUNDVIEW_H
#define _UISEARCHBARSEARCHFIELDBACKGROUNDVIEW_H

@class UITextFieldRoundedRectBackgroundViewNeue;



@interface _UISearchBarSearchFieldBackgroundView : UITextFieldRoundedRectBackgroundViewNeue

@property (nonatomic) BOOL backgroundContainer; // ivar: _backgroundContainer
@property (nonatomic) NSInteger barStyle; // ivar: _barStyle
@property (nonatomic) NSUInteger searchBarStyle; // ivar: _searchBarStyle
@property (nonatomic) BOOL showingCursor; // ivar: _showingCursor
@property (nonatomic) BOOL showingTouch; // ivar: _showingTouch


-(id)_automaticFillColorForActive:(BOOL)arg0 ;
-(id)_fillColor:(BOOL)arg0 ;
-(id)_strokeColor:(BOOL)arg0 ;
-(id)_ultralightFillColorForOverlayFilter:(BOOL)arg0 active:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 active:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 active:(BOOL)arg1 updateView:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(CGFloat)arg0 ;


@end


#endif