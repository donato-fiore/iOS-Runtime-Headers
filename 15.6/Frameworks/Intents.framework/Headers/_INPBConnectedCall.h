// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCONNECTEDCALL_H
#define _INPBCONNECTEDCALL_H

@class PBCodable, NSString;
@protocol _INPBConnectedCall, NSSecureCoding, NSCopying;



@interface _INPBConnectedCall : PBCodable <_INPBConnectedCall, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int audioRoute; // ivar: _audioRoute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAudioRoute;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)audioRouteAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAudioRoute:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif