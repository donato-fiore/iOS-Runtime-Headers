// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPITEMASSISTANT_H
#define GEOMAPITEMASSISTANT_H

@class NSDictionary, NSString, NSURL;


#import "GEOBaseMapItem.h"
#import "GEOLocation.h"
#import "GEOPlace.h"
#import "GEOAddressObject.h"

@interface GEOMapItemAssistant : GEOBaseMapItem {
    GEOLocation *_location;
    NSDictionary *_addressDictionary;
    NSString *_name;
    NSURL *_businessURL;
    NSString *_phoneNumber;
    NSUInteger _muid;
    NSString *_attributionID;
    unsigned int _sampleSizeForUserRatingScore;
    float _normalizedUserRatingScore;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}




-(BOOL)_hasMUID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_hasUserRatingScore;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)isValid;
-(NSUInteger)_muid;
-(float)_normalizedUserRatingScore;
-(id)_businessURL;
-(id)_place;
-(id)addressDictionary;
-(id)addressObject;
-(id)description;
-(id)geoAddress;
-(id)initWithWithLocation:(id)arg0 addressDictionary:(id)arg1 name:(id)arg2 businessURL:(id)arg3 phoneNumber:(id)arg4 sessionID:(id)arg5 muid:(NSUInteger)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned int)arg8 normalizedUserRatingScore:(float)arg9 ;
-(id)name;
-(id)weatherDisplayName;
-(struct ? )coordinate;
-(unsigned int)_sampleSizeForUserRatingScore;


@end


#endif