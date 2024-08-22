// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSHAREFOCUSSTATUSINTENT_H
#define _INPBSHAREFOCUSSTATUSINTENT_H

@class PBCodable, NSString;
@protocol _INPBShareFocusStatusIntent, NSSecureCoding, NSCopying;


#import "_INPBFocusStatus.h"
#import "_INPBIntentMetadata.h"

@interface _INPBShareFocusStatusIntent : PBCodable <_INPBShareFocusStatusIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBFocusStatus *focusStatus; // ivar: _focusStatus
@property (readonly, nonatomic) BOOL hasFocusStatus;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
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