// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPROMINENTLABELEDELEMENTVIEW_H
#define CSPROMINENTLABELEDELEMENTVIEW_H

@class UIImage;


#import "CSProminentTextElementView.h"

@interface CSProminentLabeledElementView : CSProminentTextElementView

@property (retain, nonatomic) UIImage *glyph; // ivar: _glyph


-(id)initWithDate:(id)arg0 font:(id)arg1 textColor:(id)arg2 glyph:(id)arg3 ;
-(void)setOverrideString:(id)arg0 ;


@end


#endif