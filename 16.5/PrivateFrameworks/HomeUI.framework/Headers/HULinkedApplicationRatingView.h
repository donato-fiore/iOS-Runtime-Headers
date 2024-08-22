// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULINKEDAPPLICATIONRATINGVIEW_H
#define HULINKEDAPPLICATIONRATINGVIEW_H

@class UIView, NSArray;



@interface HULinkedApplicationRatingView : UIView

@property (nonatomic) CGFloat rating; // ivar: _rating
@property (retain, nonatomic) NSArray *starViews; // ivar: _starViews


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setupConstraints;
-(void)updateStarViews;


@end


#endif