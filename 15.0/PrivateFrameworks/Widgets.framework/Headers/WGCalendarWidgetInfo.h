// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGCALENDARWIDGETINFO_H
#define WGCALENDARWIDGETINFO_H

@class NSDate;


#import "WGWidgetInfo.h"

@interface WGCalendarWidgetInfo : WGWidgetInfo

@property (retain, nonatomic, setter=_setDate:) NSDate *date; // ivar: _date


+(BOOL)isCalendarExtension:(id)arg0 ;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg0 extension:(id)arg1 ;
-(id)_queue_iconWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 forWidgetWithIdentifier:(id)arg2 extension:(id)arg3 ;
-(id)initWithExtension:(id)arg0 ;
-(void)_handleSignificantTimeChange:(id)arg0 ;
-(void)_resetIconsImpl;


@end


#endif