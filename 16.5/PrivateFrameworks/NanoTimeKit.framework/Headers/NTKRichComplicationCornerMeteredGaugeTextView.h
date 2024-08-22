// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONCORNERMETEREDGAUGETEXTVIEW_H
#define NTKRICHCOMPLICATIONCORNERMETEREDGAUGETEXTVIEW_H



#import "NTKRichComplicationCornerGaugeTextView.h"
#import "NTKRichComplicationImageView.h"

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView

@property (readonly, nonatomic) NTKRichComplicationImageView *outerImageView; // ivar: _outerImageView


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(NSInteger)progressFillStyle;
-(NSInteger)tritiumUpdateMode;
-(id)initWithFontFallback:(NSInteger)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif