// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSTOPSHAREETAINTENTRESPONSE_H
#define _INPBSTOPSHAREETAINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBStopShareETAIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBStopShareETAIntentResponse : PBCodable <_INPBStopShareETAIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _mediums;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *int mediums;
@property (readonly, nonatomic) NSUInteger mediumsCount;
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSUInteger recipientsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)recipientType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)mediumsAsString:(int)arg0 ;
-(id)recipientAtIndex:(NSUInteger)arg0 ;
-(int)StringAsMediums:(id)arg0 ;
-(int)mediumAtIndex:(NSUInteger)arg0 ;
-(void)addMedium:(int)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)clearMediums;
-(void)clearRecipients;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif