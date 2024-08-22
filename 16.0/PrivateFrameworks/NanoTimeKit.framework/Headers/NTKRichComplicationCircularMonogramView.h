// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONCIRCULARMONOGRAMVIEW_H
#define NTKRICHCOMPLICATIONCIRCULARMONOGRAMVIEW_H

@class CLKUIColoringLabel;


#import "NTKRichComplicationCircularBaseTextView.h"

@interface NTKRichComplicationCircularMonogramView : NTKRichComplicationCircularBaseTextView {
    CLKUIColoringLabel *_textLabel;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)_createLabelViewWithFont:(id)arg0 ;
-(id)_labelFont;
-(void)setComplicationTemplate:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif