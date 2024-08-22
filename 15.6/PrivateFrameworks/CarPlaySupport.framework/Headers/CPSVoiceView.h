// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSVOICEVIEW_H
#define CPSVOICEVIEW_H

@class UIView, UIImageView;


#import "CPSAbridgableLabel.h"

@interface CPSVoiceView : UIView

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) CPSAbridgableLabel *titleLabel; // ivar: _titleLabel


-(id)_titleFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif