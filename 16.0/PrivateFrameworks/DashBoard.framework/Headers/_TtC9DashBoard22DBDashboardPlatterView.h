// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9DASHBOARD22DBDASHBOARDPLATTERVIEW_H
#define _TTC9DASHBOARD22DBDASHBOARDPLATTERVIEW_H

@class UIView;



@interface _TtC9DashBoard22DBDashboardPlatterView : UIView {
    ? burnView;
    ? materialView;
    ? wallpaperPreferences;
}


@property (nonatomic) CGFloat platterCornerRadius; // ivar: platterCornerRadius


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWallpaperPreferences:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif