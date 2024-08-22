// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMLISTSEPARATORVIEW_H
#define PUALBUMLISTSEPARATORVIEW_H

@class UIView, UIColor;



@interface PUAlbumListSeparatorView : UIView {
    UIView *_separatorLine;
}


@property (copy, nonatomic) UIColor *lineColor; // ivar: _lineColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif