// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUTILITYDATECOMPLICATIONVIEW_H
#define NTKUTILITYDATECOMPLICATIONVIEW_H



#import "NTKUtilityComplicationView.h"
#import "NTKDateComplicationLabel.h"

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView {
    NTKDateComplicationLabel *_label;
}


@property (readonly, nonatomic) NSUInteger dateStyle; // ivar: _dateStyle


-(CGFloat)_widthThatFits;
-(id)accentColor;
-(id)foregroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateLabelSize;
-(void)layoutSubviews;
-(void)setAccentColor:(id)arg0 ;
-(void)setDateComplicationText:(id)arg0 withDayRange:(struct _NSRange )arg1 forDateStyle:(NSUInteger)arg2 ;
-(void)setFont:(id)arg0 ;
-(void)setForegroundColor:(id)arg0 ;


@end


#endif