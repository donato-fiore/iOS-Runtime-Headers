// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPUSERPRIVACYSETTINGSBATCHLOOKUPRESPONSE_H
#define CKDPUSERPRIVACYSETTINGSBATCHLOOKUPRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *containerPrivacySettings; // ivar: _containerPrivacySettings


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerPrivacySettingsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContainerPrivacySettings:(id)arg0 ;
-(void)clearContainerPrivacySettings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif