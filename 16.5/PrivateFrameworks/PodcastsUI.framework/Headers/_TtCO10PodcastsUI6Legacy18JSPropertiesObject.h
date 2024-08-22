// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCO10PODCASTSUI6LEGACY18JSPROPERTIESOBJECT_H
#define _TTCO10PODCASTSUI6LEGACY18JSPROPERTIESOBJECT_H

@class NSDictionary, NSString;
@protocol _TtP10PodcastsUI18JSPropertiesExport_;

#import <Foundation/Foundation.h>


@interface _TtCO10PodcastsUI6Legacy18JSPropertiesObject : NSObject <_TtP10PodcastsUI18JSPropertiesExport_>

 {
    ? manifest;
}


@property (nonatomic, readonly) NSDictionary *clientFeatures;
@property (nonatomic, readonly) NSDictionary *localizations;
@property (nonatomic, readonly) NSString *version;


-(id)init;


@end


#endif