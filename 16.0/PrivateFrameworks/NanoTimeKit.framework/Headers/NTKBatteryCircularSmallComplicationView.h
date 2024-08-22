// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBATTERYCIRCULARSMALLCOMPLICATIONVIEW_H
#define NTKBATTERYCIRCULARSMALLCOMPLICATIONVIEW_H

@class CLKUIColoringLabel;


#import "NTKCircularSmallRingTextComplicationView.h"

@interface NTKBatteryCircularSmallComplicationView : NTKCircularSmallRingTextComplicationView {
    CLKUIColoringLabel *_label;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(void)_updateForTemplateChange;


@end


#endif