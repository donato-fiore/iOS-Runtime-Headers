// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDROUTEANNOTATION_H
#define GEOCOMPOSEDROUTEANNOTATION_H

@protocol NSSecureCoding;


#import "GEOComposedEnrouteNotice.h"
#import "GEORouteAnnotation.h"
#import "GEOLatLng.h"
#import "GEOPBTransitArtwork.h"
#import "GEOMiniCard.h"

@interface GEOComposedRouteAnnotation : GEOComposedEnrouteNotice <NSSecureCoding>

 {
    GEORouteAnnotation *_annotation;
    GEOLatLng *_derivedPosition;
}


@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) GEOMiniCard *infoCard;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnrouteNotice:(id)arg0 enrouteNoticeIndex:(NSUInteger)arg1 legIndex:(NSUInteger)arg2 annotation:(id)arg3 onRoute:(id)arg4 ;
-(id)position;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif