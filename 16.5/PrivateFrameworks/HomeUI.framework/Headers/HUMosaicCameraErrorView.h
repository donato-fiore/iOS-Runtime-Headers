// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMOSAICCAMERAERRORVIEW_H
#define HUMOSAICCAMERAERRORVIEW_H

@class UIView, NSMutableArray, UILabel, NSString, UIImageView, UIStackView, UIVisualEffectView;
@protocol HUCameraErrorViewable;


#import "HUMosaicCameraCellLayoutOptions.h"

@interface HUMosaicCameraErrorView : UIView <HUCameraErrorViewable>



@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) HUMosaicCameraCellLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView
@property (nonatomic) BOOL visualEffectViewHidden;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif