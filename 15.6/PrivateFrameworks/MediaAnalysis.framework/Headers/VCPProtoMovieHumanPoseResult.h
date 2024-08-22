// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOMOVIEHUMANPOSERESULT_H
#define VCPPROTOMOVIEHUMANPOSERESULT_H

@class PBCodable;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoBounds.h"
#import "VCPProtoTimeRange.h"

@interface VCPProtoMovieHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (retain, nonatomic) VCPProtoBounds *bounds; // ivar: _bounds
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) int flags; // ivar: _flags
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