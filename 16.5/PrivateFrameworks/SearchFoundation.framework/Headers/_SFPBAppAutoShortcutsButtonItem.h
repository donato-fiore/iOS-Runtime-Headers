// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBAPPAUTOSHORTCUTSBUTTONITEM_H
#define _SFPBAPPAUTOSHORTCUTSBUTTONITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBAppAutoShortcutsButtonItem, NSSecureCoding;


#import "_SFPBAppAutoShortcutsItem.h"

@interface _SFPBAppAutoShortcutsButtonItem : PBCodable <_SFPBAppAutoShortcutsButtonItem, NSSecureCoding>



@property (retain, nonatomic) _SFPBAppAutoShortcutsItem *appAutoShortcutsItem; // ivar: _appAutoShortcutsItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif