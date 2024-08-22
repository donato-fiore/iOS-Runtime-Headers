// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENULOADINGCELLCONTENTVIEW_H
#define _UICONTEXTMENULOADINGCELLCONTENTVIEW_H

@class UIContextMenuCellContentView;


#import "UIActivityIndicatorView.h"

@interface _UIContextMenuLoadingCellContentView : UIContextMenuCellContentView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView


-(BOOL)_ignoreRemoveAllAnimations;
-(id)_contentsCompositingFilter;
-(id)_contentsTintColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)trailingView;
-(void)_updateContentAppearance;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif