// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBUSERACTIVITYINFO_H
#define _SFPBUSERACTIVITYINFO_H

@class PBCodable, NSString, NSData;
@protocol _SFPBUserActivityInfo, NSSecureCoding;


#import "_SFPBURL.h"

@interface _SFPBUserActivityInfo : PBCodable <_SFPBUserActivityInfo, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBURL *urlValue; // ivar: _urlValue
@property (nonatomic) int valueType; // ivar: _valueType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif