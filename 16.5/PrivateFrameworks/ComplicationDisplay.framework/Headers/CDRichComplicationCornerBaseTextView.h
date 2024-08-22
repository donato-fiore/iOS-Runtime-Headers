// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONCORNERBASETEXTVIEW_H
#define CDRICHCOMPLICATIONCORNERBASETEXTVIEW_H

@class CLKUICurvedColoringLabel;


#import "CDRichComplicationCornerView.h"

@interface CDRichComplicationCornerBaseTextView : CDRichComplicationCornerView {
    CLKUICurvedColoringLabel *_innerLabel;
}




-(id)initWithFontFallback:(NSInteger)arg0 ;
-(id)innerLabel;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration )arg0 ;
-(void)layoutSubviews;


@end


#endif