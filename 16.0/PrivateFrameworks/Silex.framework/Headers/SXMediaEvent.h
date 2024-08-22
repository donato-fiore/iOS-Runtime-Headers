// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXMEDIAEVENT_H
#define SXMEDIAEVENT_H

@class NSString, NSDictionary;


#import "SXAnalyticsEvent.h"

@interface SXMediaEvent : SXAnalyticsEvent

@property (retain, nonatomic) NSString *componentIdentifier; // ivar: _componentIdentifier
@property (retain, nonatomic) NSString *componentRole; // ivar: _componentRole
@property (retain, nonatomic) NSString *componentType; // ivar: _componentType
@property (nonatomic) NSUInteger galleryType; // ivar: _galleryType
@property (retain, nonatomic) NSString *mediaId; // ivar: _mediaId
@property (nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSDictionary *metaData; // ivar: _metaData
@property (nonatomic) NSUInteger videoType; // ivar: _videoType




@end


#endif