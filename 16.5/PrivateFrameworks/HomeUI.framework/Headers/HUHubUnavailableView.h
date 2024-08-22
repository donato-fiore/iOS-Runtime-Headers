// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHUBUNAVAILABLEVIEW_H
#define HUHUBUNAVAILABLEVIEW_H

@class UIView, NSString, UILabel, NSArray;


#import "HUIconView.h"

@interface HUHubUnavailableView : UIView

@property (retain, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) HUIconView *networkIconView; // ivar: _networkIconView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupView;
-(void)updateConstraints;


@end


#endif