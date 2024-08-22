// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFANALYTICSHIDDENBANNEREVENT_H
#define HFANALYTICSHIDDENBANNEREVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsHiddenBannerEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *hiddenBannerCount; // ivar: _hiddenBannerCount
@property (retain, nonatomic) NSString *hiddenBannerItemClassName; // ivar: _hiddenBannerItemClassName
@property (retain, nonatomic) NSString *tappedBannerItemClassName; // ivar: _tappedBannerItemClassName


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif