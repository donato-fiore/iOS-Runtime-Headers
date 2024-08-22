// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPROTOLIVEPHOTOEFFECTSRESULT_H
#define VCPPROTOLIVEPHOTOEFFECTSRESULT_H

@class PBCodable, NSData;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoLivePhotoEffectsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>



@property (readonly, nonatomic) BOOL hasRecipeBlob;
@property (nonatomic) NSUInteger longExposureSuggestionState; // ivar: _longExposureSuggestionState
@property (nonatomic) NSUInteger loopSuggestionState; // ivar: _loopSuggestionState
@property (retain, nonatomic) NSData *recipeBlob; // ivar: _recipeBlob


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