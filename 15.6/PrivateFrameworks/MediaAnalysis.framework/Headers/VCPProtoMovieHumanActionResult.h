// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOMOVIEHUMANACTIONRESULT_H
#define VCPPROTOMOVIEHUMANACTIONRESULT_H

@class PBCodable, NSString;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoBounds.h"
#import "VCPProtoTimeRange.h"

@interface VCPProtoMovieHumanActionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (nonatomic) float absoluteScore; // ivar: _absoluteScore
@property (retain, nonatomic) VCPProtoBounds *bounds; // ivar: _bounds
@property (retain, nonatomic) NSString *faceId; // ivar: _faceId
@property (readonly, nonatomic) BOOL hasBounds;
@property (readonly, nonatomic) BOOL hasFaceId;
@property (nonatomic) float humanScore; // ivar: _humanScore
@property (nonatomic) float relativeScore; // ivar: _relativeScore
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