// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSTOPSHAREETAINTENT_H
#define _INPBSTOPSHAREETAINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBStopShareETAIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBStopShareETAIntent : PBCodable <_INPBStopShareETAIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
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
-(id)recipientAtIndex:(NSUInteger)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)clearRecipients;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif