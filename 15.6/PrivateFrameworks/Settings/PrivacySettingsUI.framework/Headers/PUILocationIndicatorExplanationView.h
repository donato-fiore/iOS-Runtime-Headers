// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUILOCATIONINDICATOREXPLANATIONVIEW_H
#define PUILOCATIONINDICATOREXPLANATIONVIEW_H

@class UIView, UIImageView, UILabel;
@protocol PSHeaderFooterView;



@interface PUILocationIndicatorExplanationView : UIView <PSHeaderFooterView>

 {
    UIImageView *_activeIcon;
    UILabel *_activeLabel;
    UIImageView *_recentIcon;
    UILabel *_recentLabel;
    UIImageView *_geofenceIcon;
    UILabel *_geofenceLabel;
    UILabel *_explanationLabel;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)generalExplanationItemString;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif