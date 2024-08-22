// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUARTICLECONTAINERTITLEVIEW_H
#define NUARTICLECONTAINERTITLEVIEW_H

@class UIView;


#import "NUPageStyle.h"
#import "NUTitleView.h"

@interface NUArticleContainerTitleView : UIView

@property (retain, nonatomic) NUPageStyle *pageStyle; // ivar: _pageStyle
@property (readonly, nonatomic) NUTitleView *titleView; // ivar: _titleView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyPageStyle:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif