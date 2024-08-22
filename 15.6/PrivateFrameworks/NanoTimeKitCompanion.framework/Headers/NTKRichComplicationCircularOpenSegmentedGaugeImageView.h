// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONCIRCULAROPENSEGMENTEDGAUGEIMAGEVIEW_H
#define NTKRICHCOMPLICATIONCIRCULAROPENSEGMENTEDGAUGEIMAGEVIEW_H



#import "NTKRichComplicationBaseCircularOpenSegmentedGaugeImageView.h"

@interface NTKRichComplicationCircularOpenSegmentedGaugeImageView : NTKRichComplicationBaseCircularOpenSegmentedGaugeImageView



+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(NSInteger)progressFillStyle;
-(id)init;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif