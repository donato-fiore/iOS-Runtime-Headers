// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSWALLPAPERCHANGEEVENT_H
#define HFANALYTICSWALLPAPERCHANGEEVENT_H

@class NSDictionary;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsWallpaperChangeEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSDictionary *payloadDictionary; // ivar: _payloadDictionary


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif