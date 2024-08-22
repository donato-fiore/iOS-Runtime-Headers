// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI23ACTIVITYFEEDARTWORKVIEW_H
#define _TTC12GAMECENTERUI23ACTIVITYFEEDARTWORKVIEW_H

@class UIView, NSString;



@interface _TtC12GameCenterUI23ActivityFeedArtworkView : UIView {
    ? artworkViews;
    ? contentBackgroundView;
    ? sharedView;
    ? artworkContainer;
    ? gameControllerSelectButtonDestination;
}


@property (nonatomic, copy) NSString *accessibilityLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif