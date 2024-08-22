// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBPERSONHEADERCARDSECTION_H
#define _SFPBPERSONHEADERCARDSECTION_H

@class PBCodable, NSString, NSData;
@protocol _SFPBPersonHeaderCardSection, NSSecureCoding;


#import "_SFPBPerson.h"

@interface _SFPBPersonHeaderCardSection : PBCodable <_SFPBPersonHeaderCardSection, NSSecureCoding>



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