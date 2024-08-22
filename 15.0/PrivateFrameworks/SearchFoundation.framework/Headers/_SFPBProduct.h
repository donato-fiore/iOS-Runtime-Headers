// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBPRODUCT_H
#define _SFPBPRODUCT_H

@class PBCodable, NSString, NSData;
@protocol _SFPBProduct, NSSecureCoding;


#import "_SFPBURL.h"

@interface _SFPBProduct : PBCodable <_SFPBProduct, NSSecureCoding>



@property (retain, nonatomic) _SFPBURL *availabilityURL; // ivar: _availabilityURL
@property (nonatomic) BOOL buyable; // ivar: _buyable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
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