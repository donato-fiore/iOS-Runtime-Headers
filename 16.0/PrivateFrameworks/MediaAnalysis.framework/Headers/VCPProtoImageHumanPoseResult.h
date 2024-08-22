// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOIMAGEHUMANPOSERESULT_H
#define VCPPROTOIMAGEHUMANPOSERESULT_H

@class PBCodable, NSMutableArray;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;


#import "VCPProtoBounds.h"

@interface VCPProtoImageHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (retain, nonatomic) VCPProtoBounds *bounds; // ivar: _bounds
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) int flags; // ivar: _flags
@property (retain, nonatomic) NSMutableArray *keypoints; // ivar: _keypoints


+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(id)keypointsAtIndex:(NSUInteger)arg0 ;
-(void)addKeypoints:(id)arg0 ;
-(void)clearKeypoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif