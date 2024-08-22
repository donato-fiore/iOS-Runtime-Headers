// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADSCHEMASADIMMEDIATEDOWNLOADTRIGGERED_H
#define SADSCHEMASADIMMEDIATEDOWNLOADTRIGGERED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SADSchemaSADImmediateDownloadTriggered : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL existingAssets; // ivar: _existingAssets
@property (nonatomic) BOOL hasExistingAssets;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasRetryCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int locale; // ivar: _locale
@property (nonatomic) unsigned int retryCount; // ivar: _retryCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif