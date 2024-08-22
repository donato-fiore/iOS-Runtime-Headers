// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOMOVIEOBSTRUCTIONRESULT_H
#define VCPPROTOMOVIEOBSTRUCTIONRESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoTimeRange.h"

@interface VCPProtoMovieObstructionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (nonatomic) float obstructionScore; // ivar: _obstructionScore
@property (retain, nonatomic) VCPProtoTimeRange *timeRange; // ivar: _timeRange


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