// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBSPORTSTEAM_H
#define _SFPBSPORTSTEAM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBSportsTeam, NSSecureCoding;


#import "_SFPBImage.h"

@interface _SFPBSportsTeam : PBCodable <_SFPBSportsTeam, NSSecureCoding>



@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBImage *logo; // ivar: _logo
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *record; // ivar: _record
@property (copy, nonatomic) NSString *score; // ivar: _score
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