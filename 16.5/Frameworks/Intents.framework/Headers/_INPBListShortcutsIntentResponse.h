// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBLISTSHORTCUTSINTENTRESPONSE_H
#define _INPBLISTSHORTCUTSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBListShortcutsIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBListShortcutsIntentResponse : PBCodable <_INPBListShortcutsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *shortcuts; // ivar: _shortcuts
@property (readonly, nonatomic) NSUInteger shortcutsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)shortcutsAtIndex:(NSUInteger)arg0 ;
-(void)addShortcuts:(id)arg0 ;
-(void)clearShortcuts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif