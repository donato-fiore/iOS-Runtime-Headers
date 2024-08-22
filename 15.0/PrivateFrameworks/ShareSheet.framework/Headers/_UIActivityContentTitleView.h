// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYCONTENTTITLEVIEW_H
#define _UIACTIVITYCONTENTTITLEVIEW_H

@class UINavigationBarTitleView, NSLayoutConstraint, LPLinkView;



@interface _UIActivityContentTitleView : UINavigationBarTitleView

@property (retain, nonatomic) NSLayoutConstraint *linkTrailingAnchor; // ivar: _linkTrailingAnchor
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (nonatomic) BOOL photosCarouselMode; // ivar: _photosCarouselMode


-(NSInteger)preferredContentSizeForSize:(NSInteger)arg0 ;
-(void)_updateContent;
-(void)contentDidChange;
-(void)layoutSubviews;


@end


#endif