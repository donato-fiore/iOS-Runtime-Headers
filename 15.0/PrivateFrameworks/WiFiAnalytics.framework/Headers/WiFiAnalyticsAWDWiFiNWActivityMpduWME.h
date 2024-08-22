// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYMPDUWME_H
#define WIFIANALYTICSAWDWIFINWACTIVITYMPDUWME_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityMpduWME : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTid0;
@property (nonatomic) BOOL hasTid1;
@property (nonatomic) BOOL hasTid2;
@property (nonatomic) BOOL hasTid3;
@property (nonatomic) BOOL hasTid4;
@property (nonatomic) BOOL hasTid5;
@property (nonatomic) BOOL hasTid6;
@property (nonatomic) BOOL hasTid7;
@property (nonatomic) NSUInteger tid0; // ivar: _tid0
@property (nonatomic) NSUInteger tid1; // ivar: _tid1
@property (nonatomic) NSUInteger tid2; // ivar: _tid2
@property (nonatomic) NSUInteger tid3; // ivar: _tid3
@property (nonatomic) NSUInteger tid4; // ivar: _tid4
@property (nonatomic) NSUInteger tid5; // ivar: _tid5
@property (nonatomic) NSUInteger tid6; // ivar: _tid6
@property (nonatomic) NSUInteger tid7; // ivar: _tid7


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