// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICALENDARVIEWCUSTOMVIEWDECORATION_H
#define _UICALENDARVIEWCUSTOMVIEWDECORATION_H



#import "UICalendarViewDecoration.h"
#import "UIView.h"

@interface _UICalendarViewCustomViewDecoration : UICalendarViewDecoration

@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (copy, nonatomic) id *customViewProvider; // ivar: _customViewProvider


-(id)_decorationViewForReuseView:(id)arg0 ;
-(id)initWithCustomViewProvider:(id)arg0 ;


@end


#endif