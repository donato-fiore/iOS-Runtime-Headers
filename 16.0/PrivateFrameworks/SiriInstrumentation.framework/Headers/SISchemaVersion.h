// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAVERSION_H
#define SISCHEMAVERSION_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaVersion : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMajor;
@property (nonatomic) BOOL hasMinor;
@property (nonatomic) BOOL hasPatch;
@property (nonatomic) BOOL hasPrerelease; // ivar: _hasPrerelease
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int major; // ivar: _major
@property (nonatomic) unsigned int minor; // ivar: _minor
@property (nonatomic) unsigned int patch; // ivar: _patch
@property (copy, nonatomic) NSString *prerelease; // ivar: _prerelease


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMajor;
-(void)deleteMinor;
-(void)deletePatch;
-(void)deletePrerelease;
-(void)writeTo:(id)arg0 ;


@end


#endif