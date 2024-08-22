// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPRESPONSEOPERATIONHEADER_H
#define CKDPRESPONSEOPERATIONHEADER_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPResponseOperationHeader : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // ivar: _assetAuthorizationResponses
@property (retain, nonatomic) NSMutableArray *throttleConfigs; // ivar: _throttleConfigs


+(Class)throttleConfigType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetAuthorizationResponsesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)throttleConfigAtIndex:(NSUInteger)arg0 ;
-(void)addAssetAuthorizationResponses:(id)arg0 ;
-(void)addThrottleConfig:(id)arg0 ;
-(void)clearAssetAuthorizationResponses;
-(void)clearThrottleConfigs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif