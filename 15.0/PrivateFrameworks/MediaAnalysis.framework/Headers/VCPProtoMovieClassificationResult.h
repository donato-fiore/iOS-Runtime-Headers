// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPROTOMOVIECLASSIFICATIONRESULT_H
#define VCPPROTOMOVIECLASSIFICATIONRESULT_H

@class PBCodable, NSMutableArray;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoTimeRange.h"

@interface VCPProtoMovieClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (retain, nonatomic) NSMutableArray *classifications; // ivar: _classifications
@property (retain, nonatomic) VCPProtoTimeRange *timeRange; // ivar: _timeRange


+(Class)classificationType;
+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)classificationAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(void)addClassification:(id)arg0 ;
-(void)clearClassifications;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif