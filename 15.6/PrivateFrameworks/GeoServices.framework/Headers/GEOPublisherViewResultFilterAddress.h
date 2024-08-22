// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPUBLISHERVIEWRESULTFILTERADDRESS_H
#define GEOPUBLISHERVIEWRESULTFILTERADDRESS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDPublisherViewResultFilterAddress.h"
#import "GEOPDEntity.h"
#import "GEOMapItemIdentifier.h"

@interface GEOPublisherViewResultFilterAddress : NSObject {
    GEOPDPublisherViewResultFilterAddress *_filterAddressIdentifier;
    GEOPDEntity *_placeEntity;
}


@property (readonly, nonatomic) GEOPDPublisherViewResultFilterAddress *addressIdentifier;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) GEOMapItemIdentifier *filterAddressIdentifier;


-(id)initWithFilterAddressIdentifier:(id)arg0 withPlaces:(id)arg1 ;


@end


#endif