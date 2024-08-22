// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSETPROFILEINCARINTENT_H
#define _INPBSETPROFILEINCARINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetProfileInCarIntent, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"
#import "_INPBString.h"
#import "_INPBInteger.h"

@interface _INPBSetProfileInCarIntent : PBCodable <_INPBSetProfileInCarIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *carName; // ivar: _carName
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defaultProfile; // ivar: _defaultProfile
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasDefaultProfile;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasProfileName;
@property (readonly, nonatomic) BOOL hasProfileNumber;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBString *profileName; // ivar: _profileName
@property (retain, nonatomic) _INPBInteger *profileNumber; // ivar: _profileNumber
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif