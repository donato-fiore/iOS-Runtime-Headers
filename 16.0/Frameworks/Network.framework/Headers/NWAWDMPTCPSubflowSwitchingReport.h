// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDMPTCPSUBFLOWSWITCHINGREPORT_H
#define NWAWDMPTCPSUBFLOWSWITCHINGREPORT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NWAWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSwitchCount;
@property (readonly, nonatomic) BOOL hasSwitchFromInterfaceName;
@property (readonly, nonatomic) BOOL hasSwitchToInterfaceName;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int switchCount; // ivar: _switchCount
@property (retain, nonatomic) NSString *switchFromInterfaceName; // ivar: _switchFromInterfaceName
@property (retain, nonatomic) NSString *switchToInterfaceName; // ivar: _switchToInterfaceName
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif