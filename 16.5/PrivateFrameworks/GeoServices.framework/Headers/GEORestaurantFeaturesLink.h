// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORESTAURANTFEATURESLINK_H
#define GEORESTAURANTFEATURESLINK_H

@class NSMapTable, NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDRestaurantReservationLink.h"

@interface GEORestaurantFeaturesLink : NSObject {
    NSMapTable *_attributionMap;
}


@property (readonly, nonatomic) NSArray *featureProviders;
@property (readonly, nonatomic) NSArray *featureTypes;
@property (readonly, nonatomic) BOOL hasFeatures;
@property (retain, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink; // ivar: _restaurantReservationLink


-(NSUInteger)extensionModeForVendorID:(id)arg0 ;
-(id)applicationsForVendorID:(id)arg0 ;
-(id)displayNameForVendorID:(id)arg0 ;
-(id)initWithRestaurantReservationLink:(id)arg0 attributionMap:(id)arg1 ;


@end


#endif