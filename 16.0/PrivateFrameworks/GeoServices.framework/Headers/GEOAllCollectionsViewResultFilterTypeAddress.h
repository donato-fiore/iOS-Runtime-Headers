// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOALLCOLLECTIONSVIEWRESULTFILTERTYPEADDRESS_H
#define GEOALLCOLLECTIONSVIEWRESULTFILTERTYPEADDRESS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDAllCollectionsViewResultFilterTypeAddress.h"
#import "GEOPDEntity.h"
#import "GEOMapItemIdentifier.h"

@interface GEOAllCollectionsViewResultFilterTypeAddress : NSObject {
    GEOPDAllCollectionsViewResultFilterTypeAddress *_filterAddressIdentifier;
    GEOPDEntity *_placeEntity;
}


@property (readonly, nonatomic) GEOPDAllCollectionsViewResultFilterTypeAddress *addressIdentifier;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) GEOMapItemIdentifier *filterAddressIdentifier;


-(id)initWithFilterAddressIdentifier:(id)arg0 withPlaces:(id)arg1 ;


@end


#endif