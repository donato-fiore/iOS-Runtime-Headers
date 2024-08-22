// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBFILEDATAATTACHMENT_H
#define _INPBFILEDATAATTACHMENT_H

@class PBCodable, NSData, NSString;
@protocol _INPBFileDataAttachment, NSSecureCoding, NSCopying;



@interface _INPBFileDataAttachment : PBCodable <_INPBFileDataAttachment, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) BOOL hasFileName;
@property (readonly) NSUInteger hash;
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