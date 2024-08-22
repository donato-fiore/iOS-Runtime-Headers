// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAACOUSTICPROFILE_H
#define SISCHEMAACOUSTICPROFILE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaAcousticProfile : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *a; // ivar: _a
@property (nonatomic) BOOL hasA; // ivar: _hasA
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteA;
-(void)writeTo:(id)arg0 ;


@end


#endif