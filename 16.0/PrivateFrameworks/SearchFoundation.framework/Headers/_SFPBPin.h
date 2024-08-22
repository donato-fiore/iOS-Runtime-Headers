// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBPIN_H
#define _SFPBPIN_H

@class PBCodable, NSString, NSData;
@protocol _SFPBPin, NSSecureCoding;


#import "_SFPBLatLng.h"
#import "_SFPBColor.h"

@interface _SFPBPin : PBCodable <_SFPBPin, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) _SFPBLatLng *location; // ivar: _location
@property (copy, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (nonatomic) int pinBehavior; // ivar: _pinBehavior
@property (retain, nonatomic) _SFPBColor *pinColor; // ivar: _pinColor
@property (copy, nonatomic) NSString *pinText; // ivar: _pinText
@property (copy, nonatomic) NSString *resultID; // ivar: _resultID
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif