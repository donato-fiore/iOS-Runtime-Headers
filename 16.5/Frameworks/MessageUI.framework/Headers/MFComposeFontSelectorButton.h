// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSEFONTSELECTORBUTTON_H
#define MFCOMPOSEFONTSELECTORBUTTON_H

@class UIFont;


#import "MFComposeStyleSelectorButton.h"

@interface MFComposeFontSelectorButton : MFComposeStyleSelectorButton

@property (retain, nonatomic) UIFont *representedFont; // ivar: _representedFont


+(id)buttonWithFont:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif