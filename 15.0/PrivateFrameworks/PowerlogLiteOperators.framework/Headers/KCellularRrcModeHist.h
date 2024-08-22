// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARRRCMODEHIST_H
#define KCELLULARRRCMODEHIST_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularRrcModeHist : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int connDurBin0; // ivar: _connDurBin0
@property (nonatomic) unsigned int connDurBin1; // ivar: _connDurBin1
@property (nonatomic) unsigned int connDurBin10; // ivar: _connDurBin10
@property (nonatomic) unsigned int connDurBin11; // ivar: _connDurBin11
@property (nonatomic) unsigned int connDurBin12; // ivar: _connDurBin12
@property (nonatomic) unsigned int connDurBin2; // ivar: _connDurBin2
@property (nonatomic) unsigned int connDurBin3; // ivar: _connDurBin3
@property (nonatomic) unsigned int connDurBin4; // ivar: _connDurBin4
@property (nonatomic) unsigned int connDurBin5; // ivar: _connDurBin5
@property (nonatomic) unsigned int connDurBin6; // ivar: _connDurBin6
@property (nonatomic) unsigned int connDurBin7; // ivar: _connDurBin7
@property (nonatomic) unsigned int connDurBin8; // ivar: _connDurBin8
@property (nonatomic) unsigned int connDurBin9; // ivar: _connDurBin9
@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) BOOL hasConnDurBin0;
@property (nonatomic) BOOL hasConnDurBin1;
@property (nonatomic) BOOL hasConnDurBin10;
@property (nonatomic) BOOL hasConnDurBin11;
@property (nonatomic) BOOL hasConnDurBin12;
@property (nonatomic) BOOL hasConnDurBin2;
@property (nonatomic) BOOL hasConnDurBin3;
@property (nonatomic) BOOL hasConnDurBin4;
@property (nonatomic) BOOL hasConnDurBin5;
@property (nonatomic) BOOL hasConnDurBin6;
@property (nonatomic) BOOL hasConnDurBin7;
@property (nonatomic) BOOL hasConnDurBin8;
@property (nonatomic) BOOL hasConnDurBin9;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasIdleDurBin0;
@property (nonatomic) BOOL hasIdleDurBin1;
@property (nonatomic) BOOL hasIdleDurBin10;
@property (nonatomic) BOOL hasIdleDurBin11;
@property (nonatomic) BOOL hasIdleDurBin12;
@property (nonatomic) BOOL hasIdleDurBin2;
@property (nonatomic) BOOL hasIdleDurBin3;
@property (nonatomic) BOOL hasIdleDurBin4;
@property (nonatomic) BOOL hasIdleDurBin5;
@property (nonatomic) BOOL hasIdleDurBin6;
@property (nonatomic) BOOL hasIdleDurBin7;
@property (nonatomic) BOOL hasIdleDurBin8;
@property (nonatomic) BOOL hasIdleDurBin9;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int idleDurBin0; // ivar: _idleDurBin0
@property (nonatomic) unsigned int idleDurBin1; // ivar: _idleDurBin1
@property (nonatomic) unsigned int idleDurBin10; // ivar: _idleDurBin10
@property (nonatomic) unsigned int idleDurBin11; // ivar: _idleDurBin11
@property (nonatomic) unsigned int idleDurBin12; // ivar: _idleDurBin12
@property (nonatomic) unsigned int idleDurBin2; // ivar: _idleDurBin2
@property (nonatomic) unsigned int idleDurBin3; // ivar: _idleDurBin3
@property (nonatomic) unsigned int idleDurBin4; // ivar: _idleDurBin4
@property (nonatomic) unsigned int idleDurBin5; // ivar: _idleDurBin5
@property (nonatomic) unsigned int idleDurBin6; // ivar: _idleDurBin6
@property (nonatomic) unsigned int idleDurBin7; // ivar: _idleDurBin7
@property (nonatomic) unsigned int idleDurBin8; // ivar: _idleDurBin8
@property (nonatomic) unsigned int idleDurBin9; // ivar: _idleDurBin9
@property (nonatomic) unsigned int subsId; // ivar: _subsId
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