// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMASERVERCOMMONEVENTMETADATA_H
#define SISCHEMASERVERCOMMONEVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaVersion.h"

@interface SISchemaServerCommonEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasServerPod; // ivar: _hasServerPod
@property (nonatomic) BOOL hasServerVersion; // ivar: _hasServerVersion
@property (nonatomic) BOOL hasTimestampMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *serverPod; // ivar: _serverPod
@property (retain, nonatomic) SISchemaVersion *serverVersion; // ivar: _serverVersion
@property (nonatomic) NSUInteger timestampMs; // ivar: _timestampMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif