// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUICUSTOMIMAGETABLEVIEWCELL_H
#define RUICUSTOMIMAGETABLEVIEWCELL_H

@class UIImageView, UILabel, UIStackView;


#import "RemoteUITableViewCell.h"

@interface RUICustomImageTableViewCell : RemoteUITableViewCell

@property (readonly, nonatomic) UIImageView *customImageView;
@property (retain, nonatomic) UIImageView *customImageViewInternal; // ivar: _customImageViewInternal
@property (readonly, nonatomic) UILabel *customTextLabel;
@property (retain, nonatomic) UILabel *customTextLabelInternal; // ivar: _customTextLabelInternal
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(void)_initializeViews;


@end


#endif