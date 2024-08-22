// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOPASSCODEUPGRADEFLOWAPPLYPASSCODERESTRICTIONSREQUEST_H
#define NPKPROTOPASSCODEUPGRADEFLOWAPPLYPASSCODERESTRICTIONSREQUEST_H

@class PBRequest;
@protocol NSCopying;



@interface NPKProtoPasscodeUpgradeFlowApplyPasscodeRestrictionsRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int enforcedPolicy; // ivar: _enforcedPolicy
@property (nonatomic) BOOL hasEnforcedPolicy;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)enforcedPolicyAsString:(int)arg0 ;
-(int)StringAsEnforcedPolicy:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif