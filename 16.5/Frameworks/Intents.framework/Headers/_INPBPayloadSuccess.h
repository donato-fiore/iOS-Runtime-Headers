// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBPAYLOADSUCCESS_H
#define _INPBPAYLOADSUCCESS_H

@class PBCodable, NSString;
@protocol _INPBPayloadSuccess, NSSecureCoding, NSCopying;


#import "_INPBIntentSlotValue.h"

@interface _INPBPayloadSuccess : PBCodable <_INPBPayloadSuccess, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasResolvedKeyPath;
@property (readonly, nonatomic) BOOL hasResolvedValue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *resolvedKeyPath; // ivar: _resolvedKeyPath
@property (retain, nonatomic) _INPBIntentSlotValue *resolvedValue; // ivar: _resolvedValue
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