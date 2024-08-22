// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOPASSCODEUPGRADEFLOWPRESENTATIONREQUEST_H
#define NPKPROTOPASSCODEUPGRADEFLOWPRESENTATIONREQUEST_H

@class PBRequest;
@protocol NSCopying;



@interface NPKProtoPasscodeUpgradeFlowPresentationRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int changeType; // ivar: _changeType
@property (nonatomic) BOOL hasChangeType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChangeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif