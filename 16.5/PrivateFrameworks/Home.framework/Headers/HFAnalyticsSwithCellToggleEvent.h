// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSSWITHCELLTOGGLEEVENT_H
#define HFANALYTICSSWITHCELLTOGGLEEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsSwithCellToggleEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *isOn; // ivar: _isOn
@property (retain, nonatomic) NSString *itemClassName; // ivar: _itemClassName
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSString *sourceViewControllerClassName; // ivar: _sourceViewControllerClassName
@property (retain, nonatomic) NSString *toggleTitle; // ivar: _toggleTitle


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif