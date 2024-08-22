// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBVOICECOMMANDDEVICEINFORMATION_H
#define _INPBVOICECOMMANDDEVICEINFORMATION_H

@class PBCodable, NSString;
@protocol _INPBVoiceCommandDeviceInformation, NSSecureCoding, NSCopying;



@interface _INPBVoiceCommandDeviceInformation : PBCodable <_INPBVoiceCommandDeviceInformation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceIdiom; // ivar: _deviceIdiom
@property (nonatomic) BOOL hasDeviceIdiom;
@property (nonatomic) BOOL hasIsHomePodInUltimateMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHomePodInUltimateMode; // ivar: _isHomePodInUltimateMode
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceIdiomAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsDeviceIdiom:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif