// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEINITIALIZATIONRESPONSE_H
#define NPKPROTOSTANDALONEINITIALIZATIONRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NPKProtoStandaloneError.h"
#import "NPKProtoStandaloneResponseHeader.h"

@interface NPKProtoStandaloneInitializationResponse : PBCodable <NSCopying>

 {
    ? _supportedServerVersions;
}


@property (retain, nonatomic) NSString *clientInfoHTTPHeader; // ivar: _clientInfoHTTPHeader
@property (retain, nonatomic) NPKProtoStandaloneError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasClientInfoHTTPHeader;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // ivar: _responseHeader
@property (readonly, nonatomic) *int supportedServerVersions;
@property (readonly, nonatomic) NSUInteger supportedServerVersionsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)supportedServerVersionsAsString:(int)arg0 ;
-(int)StringAsSupportedServerVersions:(id)arg0 ;
-(int)supportedServerVersionsAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedServerVersions:(int)arg0 ;
-(void)clearSupportedServerVersions;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif