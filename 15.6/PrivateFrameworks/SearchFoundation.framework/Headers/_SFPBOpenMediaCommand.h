// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBOPENMEDIACOMMAND_H
#define _SFPBOPENMEDIACOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBOpenMediaCommand, NSSecureCoding;


#import "_SFPBMediaMetadata.h"

@interface _SFPBOpenMediaCommand : PBCodable <_SFPBOpenMediaCommand, NSSecureCoding>



@property (copy, nonatomic) NSString *clientSelectedBundleIdentifier; // ivar: _clientSelectedBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBMediaMetadata *mediaMetadata; // ivar: _mediaMetadata
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