// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBIMAGEOPTION_H
#define _SFPBIMAGEOPTION_H

@class PBCodable, NSString, NSData;
@protocol _SFPBImageOption, NSSecureCoding;


#import "_SFPBStringDictionary.h"

@interface _SFPBImageOption : PBCodable <_SFPBImageOption, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) _SFPBStringDictionary *options; // ivar: _options
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