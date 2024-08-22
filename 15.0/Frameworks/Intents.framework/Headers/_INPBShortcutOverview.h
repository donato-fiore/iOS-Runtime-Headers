// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSHORTCUTOVERVIEW_H
#define _INPBSHORTCUTOVERVIEW_H

@class PBCodable, NSString, NSArray;
@protocol _INPBShortcutOverview, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBImageValue.h"

@interface _INPBShortcutOverview : PBCodable <_INPBShortcutOverview, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDataString *descriptiveText; // ivar: _descriptiveText
@property (readonly, nonatomic) BOOL hasDescriptiveText;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasVoiceCommand;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBImageValue *icon; // ivar: _icon
@property (retain, nonatomic) _INPBDataString *name; // ivar: _name
@property (copy, nonatomic) NSArray *steps; // ivar: _steps
@property (readonly, nonatomic) NSUInteger stepsCount;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDataString *voiceCommand; // ivar: _voiceCommand


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)stepsAtIndex:(NSUInteger)arg0 ;
-(void)addSteps:(id)arg0 ;
-(void)clearSteps;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif