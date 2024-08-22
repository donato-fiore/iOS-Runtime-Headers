// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPLACEMARKINTERNAL_H
#define CLPLACEMARKINTERNAL_H

@class NSDictionary, NSArray, GEOMapItemStorage, NSTimeZone, NSData, NSString;

#import <Foundation/Foundation.h>

#import "CLLocation.h"
#import "CLRegion.h"

@interface CLPlacemarkInternal : NSObject {
    CLLocation *location;
    NSDictionary *addressDictionary;
    CLRegion *region;
    NSArray *areasOfInterest;
    GEOMapItemStorage *geoMapItemStorage;
    NSTimeZone *timeZone;
    NSUInteger _cLMapItemSource;
    NSData *_geoMapItemHandle;
    NSString *mecardAddress;
}




-(id)init;


@end


#endif