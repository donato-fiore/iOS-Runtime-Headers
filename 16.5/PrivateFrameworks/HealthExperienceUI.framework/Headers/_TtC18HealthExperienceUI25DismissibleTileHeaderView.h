// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI25DISMISSIBLETILEHEADERVIEW_H
#define _TTC18HEALTHEXPERIENCEUI25DISMISSIBLETILEHEADERVIEW_H

@class UIView;



@interface _TtC18HealthExperienceUI25DismissibleTileHeaderView : UIView {
    ? chromeHostView;
    ? heightConstraint;
    ? dataSource;
    ? detailLabel;
    ? titleLabel;
    ? accessoryLabel;
    ? detailContainerView;
    ? accessorySeparator;
    ? $__lazy_storage_$_accessoryImage;
    ? title;
    ? accessoryColor;
    ? minimumViewHeight;
    ? titleToTop;
    ? titleToBottom;
    ? titleToDismiss;
    ? detailToTitle;
    ? detailToSeparator;
    ? dismissToSeparator;
    ? dismissToTop;
    ? dismissToBottom;
    ? dismissToTrailing;
    ? minimumTappableDismissWidth;
    ? minimumTappableDismissHeight;
}




-(id)accessibilityAccessoryLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didReceiveSignificantTimeChangeNotification:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif