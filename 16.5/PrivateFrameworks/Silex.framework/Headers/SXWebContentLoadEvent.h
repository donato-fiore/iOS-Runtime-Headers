// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXWEBCONTENTLOADEVENT_H
#define SXWEBCONTENTLOADEVENT_H

@class NSURL, NSError;


#import "SXAnalyticsEvent.h"

@interface SXWebContentLoadEvent : SXAnalyticsEvent

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSError *error; // ivar: _error


-(id)initWithURL:(id)arg0 ;


@end


#endif