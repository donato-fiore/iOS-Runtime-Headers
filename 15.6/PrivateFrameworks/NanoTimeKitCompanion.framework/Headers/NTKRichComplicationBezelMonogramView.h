// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONBEZELMONOGRAMVIEW_H
#define NTKRICHCOMPLICATIONBEZELMONOGRAMVIEW_H



#import "NTKRichComplicationBezelBaseTextView.h"
#import "NTKColoringLabel.h"

@interface NTKRichComplicationBezelMonogramView : NTKRichComplicationBezelBaseTextView {
    NTKColoringLabel *_textLabel;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)_createLabelViewWithFont:(id)arg0 ;
-(id)_labelFont;
-(void)setComplicationTemplate:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif