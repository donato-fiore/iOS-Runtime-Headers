// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCUSTOMOBJECT_H
#define _INPBCUSTOMOBJECT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBCustomObject, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"

@interface _INPBCustomObject : PBCodable <_INPBCustomObject, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *alternatives; // ivar: _alternatives
@property (readonly, nonatomic) NSUInteger alternativesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBImageValue *displayImage; // ivar: _displayImage
@property (copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly, nonatomic) BOOL hasDisplayImage;
@property (readonly, nonatomic) BOOL hasDisplayString;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPronunciationHint;
@property (readonly, nonatomic) BOOL hasSubtitleString;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *pronunciationHint; // ivar: _pronunciationHint
@property (copy, nonatomic) NSString *subtitleString; // ivar: _subtitleString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)alternativeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alternativeAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addAlternative:(id)arg0 ;
-(void)clearAlternatives;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif