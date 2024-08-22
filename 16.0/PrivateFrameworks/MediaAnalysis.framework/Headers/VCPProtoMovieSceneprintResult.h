// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOMOVIESCENEPRINTRESULT_H
#define VCPPROTOMOVIESCENEPRINTRESULT_H

@class PBCodable, NSData;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoTime.h"

@interface VCPProtoMovieSceneprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (retain, nonatomic) NSData *sceneprintBlob; // ivar: _sceneprintBlob
@property (retain, nonatomic) VCPProtoTime *timestamp; // ivar: _timestamp


+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif