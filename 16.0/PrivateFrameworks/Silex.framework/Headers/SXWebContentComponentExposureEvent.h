// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXWEBCONTENTCOMPONENTEXPOSUREEVENT_H
#define SXWEBCONTENTCOMPONENTEXPOSUREEVENT_H

@class NSURL, NSString;


#import "SXAnalyticsEvent.h"

@interface SXWebContentComponentExposureEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *componentIdentifier; // ivar: _componentIdentifier
@property (readonly, nonatomic) NSString *exposureIdentifier; // ivar: _exposureIdentifier


-(id)initWithComponent:(id)arg0 ;


@end


#endif