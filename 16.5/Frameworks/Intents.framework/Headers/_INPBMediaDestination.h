// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBMEDIADESTINATION_H
#define _INPBMEDIADESTINATION_H

@class PBCodable, NSString;
@protocol _INPBMediaDestination, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBMediaDestination : PBCodable <_INPBMediaDestination, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMediaDestinationType;
@property (readonly, nonatomic) BOOL hasPlaylistName;
@property (readonly) NSUInteger hash;
@property (nonatomic) int mediaDestinationType; // ivar: _mediaDestinationType
@property (retain, nonatomic) _INPBString *playlistName; // ivar: _playlistName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)mediaDestinationTypeAsString:(int)arg0 ;
-(int)StringAsMediaDestinationType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif