// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPROTOMOVIEUTTERANCERESULT_H
#define VCPPROTOMOVIEUTTERANCERESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoTimeRange.h"

@interface VCPProtoMovieUtteranceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



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