// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDLOCATIONADDRESS_H
#define GDLOCATIONADDRESS_H

@class NSString;
@protocol GDTripleIteratorSubEntityRenderer, GDSubEntity;

#import <Foundation/Foundation.h>

#import "GDSubEntityIdentifier.h"

@interface GDLocationAddress : NSObject <GDTripleIteratorSubEntityRenderer, GDSubEntity>



@property (readonly, nonatomic) NSString *ISOCountryCode; // ivar: _ISOCountryCode
@property (readonly, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) NSString *locality; // ivar: _locality
@property (readonly, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (readonly, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (readonly, nonatomic) GDSubEntityIdentifier *subEntityIdentifier; // ivar: _subEntityIdentifier
@property (readonly, nonatomic) NSString *subLocality; // ivar: _subLocality
@property (readonly, nonatomic) NSString *subPremises; // ivar: _subPremises
@property (readonly, nonatomic) NSString *subThoroughfare; // ivar: _subThoroughfare
@property (readonly, nonatomic) NSString *thoroughfare; // ivar: _thoroughfare


+(NSUInteger)triplesColumnsRequiredForRendering;
-(id)description;
-(id)initWithRelationshipIdTriplesIterator:(id)arg0 ;


@end


#endif