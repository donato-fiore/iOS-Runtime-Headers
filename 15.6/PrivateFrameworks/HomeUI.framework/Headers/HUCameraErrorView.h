// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAERRORVIEW_H
#define HUCAMERAERRORVIEW_H

@class UIStackView, UILabel, NSString, UIImageView;



@interface HUCameraErrorView : UIStackView

@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;


-(id)init;


@end


#endif