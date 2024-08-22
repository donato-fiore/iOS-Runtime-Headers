// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTEXPOSUREEVENT_H
#define SXCOMPONENTEXPOSUREEVENT_H

@class NSString, NSDictionary;


#import "SXAnalyticsEvent.h"

@interface SXComponentExposureEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSString *componentIdentifier; // ivar: _componentIdentifier
@property (readonly, nonatomic) NSString *componentRole; // ivar: _componentRole
@property (readonly, nonatomic) NSString *componentType; // ivar: _componentType
@property (readonly, nonatomic) NSDictionary *metaData; // ivar: _metaData


-(id)description;
-(id)initWithComponent:(id)arg0 ;


@end


#endif