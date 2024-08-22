// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSWALLETKEYEXPRESSMODEEVENT_H
#define HFANALYTICSWALLETKEYEXPRESSMODEEVENT_H

@class NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsWalletKeyExpressModeEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *expressModeLocationNumber; // ivar: _expressModeLocationNumber
@property (retain, nonatomic) NSNumber *expressModeSelectionNumber; // ivar: _expressModeSelectionNumber


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif