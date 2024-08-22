// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSNETWORKLOADEDLINKQUALITYMETRIC_H
#define AWDSYMPTOMSNETWORKLOADEDLINKQUALITYMETRIC_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsNetworkLoadedLinkQualityMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int dataStalls; // ivar: _dataStalls
@property (nonatomic) BOOL hasDataStalls;
@property (nonatomic) BOOL hasIsLowInternetDL;
@property (nonatomic) BOOL hasIsLowInternetUL;
@property (nonatomic) BOOL hasIsNetworkReliable;
@property (nonatomic) BOOL hasLQM;
@property (nonatomic) BOOL hasLastReportedRSSI;
@property (nonatomic) BOOL hasLoadedLQM;
@property (readonly, nonatomic) BOOL hasNetworkAttachmentLabel;
@property (nonatomic) BOOL hasNetworkType;
@property (readonly, nonatomic) BOOL hasRadioAccessTechnology;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isLowInternetDL; // ivar: _isLowInternetDL
@property (nonatomic) BOOL isLowInternetUL; // ivar: _isLowInternetUL
@property (nonatomic) BOOL isNetworkReliable; // ivar: _isNetworkReliable
@property (nonatomic) int lQM; // ivar: _lQM
@property (nonatomic) int lastReportedRSSI; // ivar: _lastReportedRSSI
@property (nonatomic) int loadedLQM; // ivar: _loadedLQM
@property (retain, nonatomic) NSString *networkAttachmentLabel; // ivar: _networkAttachmentLabel
@property (nonatomic) int networkType; // ivar: _networkType
@property (retain, nonatomic) NSString *radioAccessTechnology; // ivar: _radioAccessTechnology
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif