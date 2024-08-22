// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABCPBSIGCONFIGWHITELIST_H
#define ABCPBSIGCONFIGWHITELIST_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ABCPbSigConfigWhitelist : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSString *buildVariant; // ivar: _buildVariant
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) int globalDecision; // ivar: _globalDecision
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (nonatomic) BOOL hasGlobalDecision;
@property (retain, nonatomic) NSMutableArray *sigConfigs; // ivar: _sigConfigs


+(Class)sigConfigType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)globalDecisionAsString:(int)arg0 ;
-(id)sigConfigAtIndex:(NSUInteger)arg0 ;
-(int)StringAsGlobalDecision:(id)arg0 ;
-(void)addSigConfig:(id)arg0 ;
-(void)clearSigConfigs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif