// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXLINKTAPEVENT_H
#define SXLINKTAPEVENT_H

@class NSURL;


#import "SXAnalyticsEvent.h"

@interface SXLinkTapEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL


-(id)initWithDestinationURL:(id)arg0 ;


@end


#endif