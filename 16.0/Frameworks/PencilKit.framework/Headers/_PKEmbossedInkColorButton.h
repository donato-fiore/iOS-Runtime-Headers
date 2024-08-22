// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKEMBOSSEDINKCOLORBUTTON_H
#define _PKEMBOSSEDINKCOLORBUTTON_H

@class UIImageView;


#import "PKInkColorButton.h"

@interface _PKEmbossedInkColorButton : PKInkColorButton

@property (retain, nonatomic) UIImageView *colorImageView; // ivar: _colorImageView
@property (retain, nonatomic) UIImageView *embossImageView; // ivar: _embossImageView


+(id)colorFillImageIsCompact:(BOOL)arg0 ;
-(id)initWithColor:(id)arg0 isCompact:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif