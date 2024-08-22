// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBVOICECOMMANDSTEPINFO_H
#define _INPBVOICECOMMANDSTEPINFO_H

@class PBCodable, NSString;
@protocol _INPBVoiceCommandStepInfo, NSSecureCoding, NSCopying;



@interface _INPBVoiceCommandStepInfo : PBCodable <_INPBVoiceCommandStepInfo, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (nonatomic) int category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)categoryAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsCategory:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif