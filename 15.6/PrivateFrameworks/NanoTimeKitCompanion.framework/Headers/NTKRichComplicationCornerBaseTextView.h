// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONCORNERBASETEXTVIEW_H
#define NTKRICHCOMPLICATIONCORNERBASETEXTVIEW_H



#import "NTKRichComplicationCornerView.h"
#import "NTKCurvedColoringLabel.h"

@interface NTKRichComplicationCornerBaseTextView : NTKRichComplicationCornerView {
    NTKCurvedColoringLabel *_innerLabel;
}




-(id)init;
-(id)innerLabel;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif