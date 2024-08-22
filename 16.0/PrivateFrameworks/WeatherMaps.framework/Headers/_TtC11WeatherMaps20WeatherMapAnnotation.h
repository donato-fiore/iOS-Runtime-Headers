// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS20WEATHERMAPANNOTATION_H
#define _TTC11WEATHERMAPS20WEATHERMAPANNOTATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC11WeatherMaps20WeatherMapAnnotation : NSObject {
    ? annotatedLocation;
}


@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) NSString *title;


-(id)init;


@end


#endif