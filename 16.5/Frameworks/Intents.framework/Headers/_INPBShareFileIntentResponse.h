// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSHAREFILEINTENTRESPONSE_H
#define _INPBSHAREFILEINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBShareFileIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBShareFileIntentResponse : PBCodable <_INPBShareFileIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL confirm; // ivar: _confirm
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasConfirm;
@property (nonatomic) BOOL hasShareMode;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSUInteger recipientsCount;
@property (nonatomic) int shareMode; // ivar: _shareMode
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)recipientsAtIndex:(NSUInteger)arg0 ;
-(id)shareModeAsString:(int)arg0 ;
-(int)StringAsShareMode:(id)arg0 ;
-(void)addRecipients:(id)arg0 ;
-(void)clearRecipients;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif