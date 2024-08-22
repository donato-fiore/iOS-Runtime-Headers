// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWAWDMPTCPCONNECTIONINTERFACEREPORT_H
#define NWAWDMPTCPCONNECTIONINTERFACEREPORT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NWAWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying>

 {
    ? _postConnectSubflowFailureErrors;
    ? _has;
}


@property (nonatomic) NSInteger dataInKB; // ivar: _dataInKB
@property (nonatomic) NSInteger dataOutKB; // ivar: _dataOutKB
@property (nonatomic) BOOL hasDataInKB;
@property (nonatomic) BOOL hasDataOutKB;
@property (readonly, nonatomic) BOOL hasInterfaceName;
@property (nonatomic) BOOL hasPostConnectTcpFallbackCount;
@property (nonatomic) BOOL hasSecondaryFlowFailureCount;
@property (nonatomic) BOOL hasSecondaryFlowSuccessCount;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, nonatomic) *int postConnectSubflowFailureErrors;
@property (readonly, nonatomic) NSUInteger postConnectSubflowFailureErrorsCount;
@property (nonatomic) BOOL postConnectTcpFallbackCount; // ivar: _postConnectTcpFallbackCount
@property (nonatomic) int secondaryFlowFailureCount; // ivar: _secondaryFlowFailureCount
@property (nonatomic) int secondaryFlowSuccessCount; // ivar: _secondaryFlowSuccessCount
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)postConnectSubflowFailureErrorsAtIndex:(NSUInteger)arg0 ;
-(void)addPostConnectSubflowFailureErrors:(int)arg0 ;
-(void)clearPostConnectSubflowFailureErrors;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif