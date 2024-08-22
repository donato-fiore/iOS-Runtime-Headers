// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYBTCOEXREQESTREASON_H
#define WIFIANALYTICSAWDWIFINWACTIVITYBTCOEXREQESTREASON_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int a2dp; // ivar: _a2dp
@property (nonatomic) unsigned int acl; // ivar: _acl
@property (nonatomic) unsigned int ble; // ivar: _ble
@property (nonatomic) unsigned int blescan; // ivar: _blescan
@property (nonatomic) unsigned int esco; // ivar: _esco
@property (nonatomic) BOOL hasA2dp;
@property (nonatomic) BOOL hasAcl;
@property (nonatomic) BOOL hasBle;
@property (nonatomic) BOOL hasBlescan;
@property (nonatomic) BOOL hasEsco;
@property (nonatomic) BOOL hasInquiry;
@property (nonatomic) BOOL hasInquiryscan;
@property (nonatomic) BOOL hasMss;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) BOOL hasPage;
@property (nonatomic) BOOL hasPagescan;
@property (nonatomic) BOOL hasPark;
@property (nonatomic) BOOL hasSco;
@property (nonatomic) BOOL hasSniff;
@property (nonatomic) unsigned int inquiry; // ivar: _inquiry
@property (nonatomic) unsigned int inquiryscan; // ivar: _inquiryscan
@property (nonatomic) unsigned int mss; // ivar: _mss
@property (nonatomic) unsigned int other; // ivar: _other
@property (nonatomic) unsigned int page; // ivar: _page
@property (nonatomic) unsigned int pagescan; // ivar: _pagescan
@property (nonatomic) unsigned int park; // ivar: _park
@property (nonatomic) unsigned int sco; // ivar: _sco
@property (nonatomic) unsigned int sniff; // ivar: _sniff


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