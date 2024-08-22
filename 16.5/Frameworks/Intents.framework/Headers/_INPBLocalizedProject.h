// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBLOCALIZEDPROJECT_H
#define _INPBLOCALIZEDPROJECT_H

@class PBCodable, NSString;
@protocol _INPBLocalizedProject, NSSecureCoding, NSCopying;


#import "_INPBAppNames.h"
#import "_INPBIntentVocabulary.h"
#import "_INPBLanguageTag.h"

@interface _INPBLocalizedProject : PBCodable <_INPBLocalizedProject, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAppNames *appNames; // ivar: _appNames
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAppNames;
@property (readonly, nonatomic) BOOL hasIntentVocabulary;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentVocabulary *intentVocabulary; // ivar: _intentVocabulary
@property (retain, nonatomic) _INPBLanguageTag *language; // ivar: _language
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