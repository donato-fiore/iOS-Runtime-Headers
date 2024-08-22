// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITWATCHCOMPANIONCONNECTIVITYREPORT_H
#define AWDHOMEKITWATCHCOMPANIONCONNECTIVITYREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitWatchCompanionConnectivityReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumWatchAddEvents;
@property (nonatomic) BOOL hasNumWatchRemoveEvents;
@property (nonatomic) BOOL hasReportComplete;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int numWatchAddEvents; // ivar: _numWatchAddEvents
@property (nonatomic) unsigned int numWatchRemoveEvents; // ivar: _numWatchRemoveEvents
@property (nonatomic) BOOL reportComplete; // ivar: _reportComplete
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