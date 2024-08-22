// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBPERFORMCONTACTACTIONCOMMAND_H
#define _SFPBPERFORMCONTACTACTIONCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBPerformContactActionCommand, NSSecureCoding;



@interface _SFPBPerformContactActionCommand : PBCodable <_SFPBPerformContactActionCommand, NSSecureCoding>



@property (nonatomic) int contactActionType; // ivar: _contactActionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisplayHandleOptions; // ivar: _didDisplayHandleOptions
@property (nonatomic) BOOL didSelectFromOptionsMenu; // ivar: _didSelectFromOptionsMenu
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
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