// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSPATIALEVENTTRIGGER_H
#define _INPBSPATIALEVENTTRIGGER_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSpatialEventTrigger, NSSecureCoding, NSCopying;


#import "_INPBLocationValue.h"

@interface _INPBSpatialEventTrigger : PBCodable <_INPBSpatialEventTrigger, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int event; // ivar: _event
@property (nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMobileSpace;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLocationValue *location; // ivar: _location
@property (nonatomic) int mobileSpace; // ivar: _mobileSpace
@property (copy, nonatomic) NSArray *suggestedValues; // ivar: _suggestedValues
@property (readonly, nonatomic) NSUInteger suggestedValuesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)eventAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mobileSpaceAsString:(int)arg0 ;
-(id)suggestedValuesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEvent:(id)arg0 ;
-(int)StringAsMobileSpace:(id)arg0 ;
-(void)addSuggestedValues:(id)arg0 ;
-(void)clearSuggestedValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif