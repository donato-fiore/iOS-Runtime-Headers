// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERAERRORVIEW_H
#define HUCAMERAERRORVIEW_H

@class UIStackView, UILabel, NSString, UIImageView;
@protocol HUCameraErrorViewable;



@interface HUCameraErrorView : UIStackView <HUCameraErrorViewable>



@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;


-(id)init;


@end


#endif