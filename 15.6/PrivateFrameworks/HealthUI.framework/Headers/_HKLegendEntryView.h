// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKLEGENDENTRYVIEW_H
#define _HKLEGENDENTRYVIEW_H

@class UIStackView, UILabel, UIImageView;


#import "HKLegendEntry.h"
#import "_HKLegendDot.h"

@interface _HKLegendEntryView : UIStackView {
    HKLegendEntry *_currentLegendEntry;
    UILabel *_legendLabel;
    _HKLegendDot *_legendDot;
    UIImageView *_legendIcon;
}


@property (retain, nonatomic) HKLegendEntry *legendEntry; // ivar: _legendEntry


-(id)initWithLegendEntry:(id)arg0 ;


@end


#endif