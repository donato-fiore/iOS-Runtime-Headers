// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI19TILECELLCONTENTVIEW_H
#define _TTC6HOMEUI19TILECELLCONTENTVIEW_H

@class UIView, NSArray;
@protocol NSObject;


#import "HUBaseIconView.h"

@interface _TtC6HomeUI19TileCellContentView : UIView <NSObject>

 {
    ? configuration;
    ? prefixLabel;
    ? titleLabel;
    ? activeLayoutConstraints;
    ? descriptionLabel;
    ? badgeLabel;
    ? activityIndicator;
}


@property (nonatomic, readonly) HUBaseIconView *iconView; // ivar: iconView
@property (nonatomic, readonly) NSArray *standardLabels;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif