// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKBATTERYCIRCULARSMALLCOMPLICATIONVIEW_H
#define NTKBATTERYCIRCULARSMALLCOMPLICATIONVIEW_H



#import "NTKCircularSmallRingTextComplicationView.h"
#import "NTKColoringLabel.h"

@interface NTKBatteryCircularSmallComplicationView : NTKCircularSmallRingTextComplicationView {
    NTKColoringLabel *_label;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(void)_updateForTemplateChange;


@end


#endif