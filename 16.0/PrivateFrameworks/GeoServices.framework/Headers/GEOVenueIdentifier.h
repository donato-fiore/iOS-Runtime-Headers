// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVENUEIDENTIFIER_H
#define GEOVENUEIDENTIFIER_H

@class NSArray, NSString;
@protocol GEOVenueIdentifier;

#import <Foundation/Foundation.h>


@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier>

 {
    NSArray *_originalIdentifiers;
}


@property (readonly, nonatomic) NSUInteger businessID; // ivar: _businessID
@property (readonly, nonatomic) NSArray *componentIdentifiers; // ivar: _componentIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger featureID; // ivar: _featureID
@property (readonly, nonatomic, getter=_hasBusinessID) BOOL hasBusinessID; // ivar: _hasBusinessID
@property (readonly, nonatomic, getter=_hasFeatureID) BOOL hasFeatureID; // ivar: _hasFeatureID
@property (readonly, nonatomic, getter=_hasVenueID) BOOL hasVenueID; // ivar: _hasVenueID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger venueID; // ivar: _venueID


+(id)componentIdentifiersFromVenueIdentifiers:(id)arg0 ;
-(id)init;
-(id)initWithVenueID:(NSUInteger)arg0 ;
-(id)initWithVenueID:(NSUInteger)arg0 componentIdentifiers:(id)arg1 ;
-(id)initWithVenueID:(NSUInteger)arg0 featureID:(NSUInteger)arg1 businessID:(NSUInteger)arg2 ;
-(id)initWithVenueID:(NSUInteger)arg0 featureID:(NSUInteger)arg1 businessID:(NSUInteger)arg2 componentIdentifiers:(id)arg3 ;
-(id)initWithVenueIdentifiers:(id)arg0 ;
-(id)placeDataVenueIdentifier;
-(id)placeDataVenueIdentifierForVenue;


@end


#endif