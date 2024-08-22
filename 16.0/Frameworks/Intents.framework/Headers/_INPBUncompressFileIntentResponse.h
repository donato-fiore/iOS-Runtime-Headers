// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBUNCOMPRESSFILEINTENTRESPONSE_H
#define _INPBUNCOMPRESSFILEINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBUncompressFileIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBUncompressFileIntentResponse : PBCodable <_INPBUncompressFileIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *entityName; // ivar: _entityName
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL success; // ivar: _success
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