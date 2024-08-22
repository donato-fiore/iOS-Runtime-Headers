// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPROTOLIVEPHOTOHUMANACTIONCLASSIFICATIONRESULT_H
#define VCPPROTOLIVEPHOTOHUMANACTIONCLASSIFICATIONRESULT_H

@class PBCodable, NSMutableArray, NSString;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoBounds.h"
#import "VCPProtoTimeRange.h"

@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (retain, nonatomic) VCPProtoBounds *bounds; // ivar: _bounds
@property (retain, nonatomic) NSMutableArray *classifications; // ivar: _classifications
@property (retain, nonatomic) NSString *faceId; // ivar: _faceId
@property (readonly, nonatomic) BOOL hasFaceId;
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