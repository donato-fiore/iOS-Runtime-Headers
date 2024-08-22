// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBCONTACTCOPYITEM_H
#define _SFPBCONTACTCOPYITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBContactCopyItem, NSSecureCoding;


#import "_SFPBURL.h"
#import "_SFPBPerson.h"

@interface _SFPBContactCopyItem : PBCodable <_SFPBContactCopyItem, NSSecureCoding>



@property (retain, nonatomic) _SFPBURL *contactFileLocation; // ivar: _contactFileLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBPerson *person; // ivar: _person
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif