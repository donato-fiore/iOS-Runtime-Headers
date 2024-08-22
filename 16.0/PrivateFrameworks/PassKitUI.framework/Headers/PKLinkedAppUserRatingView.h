// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLINKEDAPPUSERRATINGVIEW_H
#define PKLINKEDAPPUSERRATINGVIEW_H

@class UIView, NSMutableArray;



@interface PKLinkedAppUserRatingView : UIView {
    NSMutableArray *_starViews;
}


@property (nonatomic) float userRating; // ivar: _userRating


-(id)_starImageViewWithImage:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif