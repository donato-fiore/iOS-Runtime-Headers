// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUICUSTOMLINKTABLEVIEWCELL_H
#define RUICUSTOMLINKTABLEVIEWCELL_H

@class UIButton, UIImageView, UILabel, UIStackView;


#import "RemoteUITableViewCell.h"

@interface RUICustomLinkTableViewCell : RemoteUITableViewCell {
    id *_detailLinkHandler;
    UIButton *_detailLinkButton;
}


@property (retain, nonatomic) UIImageView *customImageViewInternal; // ivar: _customImageViewInternal
@property (readonly, nonatomic) UILabel *customLinkDetailTextLabel;
@property (retain, nonatomic) UILabel *customLinkDetailTextLabelInternal; // ivar: _customLinkDetailTextLabelInternal
@property (readonly, nonatomic) UIImageView *customLinkImageView;
@property (readonly, nonatomic) UILabel *customLinkTextLabel;
@property (retain, nonatomic) UILabel *customLinkTextLabelInternal; // ivar: _customLinkTextLabelInternal
@property (retain, nonatomic) UIStackView *innerStackView; // ivar: _innerStackView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)_detailTextLabelInternal;
-(id)_imageViewInternal;
-(id)_textLabelInternal;
-(void)_detailLinkPressed;
-(void)_initializeViews;
-(void)addDetailLinkButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)setDetailLinkText:(id)arg0 handler:(id)arg1 ;


@end


#endif