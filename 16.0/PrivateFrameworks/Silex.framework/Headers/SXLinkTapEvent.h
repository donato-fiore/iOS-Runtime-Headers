// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLINKTAPEVENT_H
#define SXLINKTAPEVENT_H

@class NSURL;


#import "SXAnalyticsEvent.h"
#import "SXJSONDictionary.h"

@interface SXLinkTapEvent : SXAnalyticsEvent

@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: _analytics
@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL


-(id)initWithDestinationURL:(id)arg0 analytics:(id)arg1 ;


@end


#endif