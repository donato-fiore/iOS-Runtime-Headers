// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYBTCOEX_H
#define WIFIANALYTICSAWDWIFINWACTIVITYBTCOEX_H

@class PBCodable;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason.h"

@interface WiFiAnalyticsAWDWiFiNWActivityBtCoex : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int a2dpdeny; // ivar: _a2dpdeny
@property (nonatomic) unsigned int a2dpgrant; // ivar: _a2dpgrant
@property (nonatomic) unsigned int aptxafterpm; // ivar: _aptxafterpm
@property (nonatomic) unsigned int audiodeny; // ivar: _audiodeny
@property (nonatomic) unsigned int audiogrant; // ivar: _audiogrant
@property (nonatomic) unsigned int btabort; // ivar: _btabort
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason *btrequestReason; // ivar: _btrequestReason
@property (nonatomic) unsigned int cts; // ivar: _cts
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) unsigned int grant; // ivar: _grant
@property (nonatomic) BOOL hasA2dpdeny;
@property (nonatomic) BOOL hasA2dpgrant;
@property (nonatomic) BOOL hasAptxafterpm;
@property (nonatomic) BOOL hasAudiodeny;
@property (nonatomic) BOOL hasAudiogrant;
@property (nonatomic) BOOL hasBtabort;
@property (readonly, nonatomic) BOOL hasBtrequestReason;
@property (nonatomic) BOOL hasCts;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasGrant;
@property (nonatomic) BOOL hasPm;
@property (nonatomic) BOOL hasPsnullretrycount;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL hasSniffdeny;
@property (nonatomic) BOOL hasSniffgrant;
@property (nonatomic) BOOL hasUcodehighlatency;
@property (nonatomic) BOOL hasWlanrxpreempt;
@property (nonatomic) BOOL hasWlantxpreempt;
@property (nonatomic) unsigned int pm; // ivar: _pm
@property (nonatomic) unsigned int psnullretrycount; // ivar: _psnullretrycount
@property (nonatomic) unsigned int request; // ivar: _request
@property (nonatomic) unsigned int sniffdeny; // ivar: _sniffdeny
@property (nonatomic) unsigned int sniffgrant; // ivar: _sniffgrant
@property (nonatomic) unsigned int ucodehighlatency; // ivar: _ucodehighlatency
@property (nonatomic) unsigned int wlanrxpreempt; // ivar: _wlanrxpreempt
@property (nonatomic) unsigned int wlantxpreempt; // ivar: _wlantxpreempt


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