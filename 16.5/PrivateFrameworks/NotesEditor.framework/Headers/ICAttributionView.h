// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTRIBUTIONVIEW_H
#define ICATTRIBUTIONVIEW_H

@class UIView, UILabel, NSMapTable, UIImageView;


#import "ICAttributionViewConfiguration.h"

@interface ICAttributionView : UIView

@property (retain, nonatomic) UIView *attributionClippingView; // ivar: _attributionClippingView
@property (retain, nonatomic) UILabel *attributionLabel; // ivar: _attributionLabel
@property (retain, nonatomic) NSMapTable *childAttributionViews; // ivar: _childAttributionViews
@property (readonly, nonatomic) ICAttributionViewConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) UIImageView *disclosureImageView; // ivar: _disclosureImageView
@property (retain, nonatomic) NSMapTable *highlightViews; // ivar: _highlightViews
@property (retain, nonatomic) UIImageView *statusImageView; // ivar: _statusImageView
@property (retain, nonatomic) UILabel *timestampLabel; // ivar: _timestampLabel


-(id)initWithConfiguration:(id)arg0 ;
-(void)updateContentAnimated:(BOOL)arg0 ;
-(void)updatePositionAndVisibility;
-(void)updateVisibility;


@end


#endif