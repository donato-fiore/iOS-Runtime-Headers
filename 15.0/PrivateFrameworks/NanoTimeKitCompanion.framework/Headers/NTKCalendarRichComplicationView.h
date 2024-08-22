// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCALENDARRICHCOMPLICATIONVIEW_H
#define NTKCALENDARRICHCOMPLICATIONVIEW_H

@class NSArray;


#import "NTKRichComplicationRectangularBaseView.h"
#import "NTKCalendarRichComplicationContentView.h"

@interface NTKCalendarRichComplicationView : NTKRichComplicationRectangularBaseView

@property (retain, nonatomic) NSArray *accentViews; // ivar: _accentViews
@property (retain, nonatomic) NTKCalendarRichComplicationContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSArray *desaturateViews; // ivar: _desaturateViews


-(id)init;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_updateViews:(id)arg0 withFilter:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif