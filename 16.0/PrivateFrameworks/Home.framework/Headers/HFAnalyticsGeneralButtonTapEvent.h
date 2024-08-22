// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFANALYTICSGENERALBUTTONTAPEVENT_H
#define HFANALYTICSGENERALBUTTONTAPEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsGeneralButtonTapEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSString *sourceViewControllerClassName; // ivar: _sourceViewControllerClassName


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif