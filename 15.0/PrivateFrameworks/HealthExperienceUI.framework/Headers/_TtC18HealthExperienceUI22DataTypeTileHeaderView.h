// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI22DATATYPETILEHEADERVIEW_H
#define _TTC18HEALTHEXPERIENCEUI22DATATYPETILEHEADERVIEW_H

@class UIView;



@interface _TtC18HealthExperienceUI22DataTypeTileHeaderView : UIView {
    ? chromeHostView;
    ? heightConstraint;
    ? currentTileHeaderDetailKind;
    ? dataSource;
    ? titleLabel;
    ? detailLabel;
    ? accessoryLabel;
    ? detailContainerView;
    ? $__lazy_storage_$_accessoryImage;
    ? minimumViewHeight;
    ? titleToTop;
    ? titleToBottom;
    ? titleToAccessory;
    ? titleToDetail;
    ? detailToAccessory;
    ? glyphBaselineOffset;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didReceiveSignificantTimeChangeNotification:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTitleText;


@end


#endif