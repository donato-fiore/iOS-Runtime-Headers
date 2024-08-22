// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONBEZELCIRCULARTEMPLATEVIEW_H
#define NTKRICHCOMPLICATIONBEZELCIRCULARTEMPLATEVIEW_H



#import "NTKRichComplicationBezelBaseCircularView.h"

@interface NTKRichComplicationBezelCircularTemplateView : NTKRichComplicationBezelBaseCircularView



+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(Class)_circularViewClassFromFromTemplate:(id)arg0 ;
-(id)_bezelTextProviderFromTemplate:(id)arg0 ;
-(id)_circularTemplateFromTemplate:(id)arg0 ;


@end


#endif