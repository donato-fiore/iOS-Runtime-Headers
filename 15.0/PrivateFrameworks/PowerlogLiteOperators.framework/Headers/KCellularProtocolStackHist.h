// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARPROTOCOLSTACKHIST_H
#define KCELLULARPROTOCOLSTACKHIST_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularProtocolStackHist : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int durBin0; // ivar: _durBin0
@property (nonatomic) unsigned int durBin1; // ivar: _durBin1
@property (nonatomic) unsigned int durBin10; // ivar: _durBin10
@property (nonatomic) unsigned int durBin11; // ivar: _durBin11
@property (nonatomic) unsigned int durBin12; // ivar: _durBin12
@property (nonatomic) unsigned int durBin13; // ivar: _durBin13
@property (nonatomic) unsigned int durBin14; // ivar: _durBin14
@property (nonatomic) unsigned int durBin15; // ivar: _durBin15
@property (nonatomic) unsigned int durBin16; // ivar: _durBin16
@property (nonatomic) unsigned int durBin17; // ivar: _durBin17
@property (nonatomic) unsigned int durBin18; // ivar: _durBin18
@property (nonatomic) unsigned int durBin19; // ivar: _durBin19
@property (nonatomic) unsigned int durBin2; // ivar: _durBin2
@property (nonatomic) unsigned int durBin20; // ivar: _durBin20
@property (nonatomic) unsigned int durBin21; // ivar: _durBin21
@property (nonatomic) unsigned int durBin22; // ivar: _durBin22
@property (nonatomic) unsigned int durBin23; // ivar: _durBin23
@property (nonatomic) unsigned int durBin24; // ivar: _durBin24
@property (nonatomic) unsigned int durBin25; // ivar: _durBin25
@property (nonatomic) unsigned int durBin26; // ivar: _durBin26
@property (nonatomic) unsigned int durBin27; // ivar: _durBin27
@property (nonatomic) unsigned int durBin28; // ivar: _durBin28
@property (nonatomic) unsigned int durBin29; // ivar: _durBin29
@property (nonatomic) unsigned int durBin3; // ivar: _durBin3
@property (nonatomic) unsigned int durBin30; // ivar: _durBin30
@property (nonatomic) unsigned int durBin31; // ivar: _durBin31
@property (nonatomic) unsigned int durBin4; // ivar: _durBin4
@property (nonatomic) unsigned int durBin5; // ivar: _durBin5
@property (nonatomic) unsigned int durBin6; // ivar: _durBin6
@property (nonatomic) unsigned int durBin7; // ivar: _durBin7
@property (nonatomic) unsigned int durBin8; // ivar: _durBin8
@property (nonatomic) unsigned int durBin9; // ivar: _durBin9
@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) BOOL hasDurBin0;
@property (nonatomic) BOOL hasDurBin1;
@property (nonatomic) BOOL hasDurBin10;
@property (nonatomic) BOOL hasDurBin11;
@property (nonatomic) BOOL hasDurBin12;
@property (nonatomic) BOOL hasDurBin13;
@property (nonatomic) BOOL hasDurBin14;
@property (nonatomic) BOOL hasDurBin15;
@property (nonatomic) BOOL hasDurBin16;
@property (nonatomic) BOOL hasDurBin17;
@property (nonatomic) BOOL hasDurBin18;
@property (nonatomic) BOOL hasDurBin19;
@property (nonatomic) BOOL hasDurBin2;
@property (nonatomic) BOOL hasDurBin20;
@property (nonatomic) BOOL hasDurBin21;
@property (nonatomic) BOOL hasDurBin22;
@property (nonatomic) BOOL hasDurBin23;
@property (nonatomic) BOOL hasDurBin24;
@property (nonatomic) BOOL hasDurBin25;
@property (nonatomic) BOOL hasDurBin26;
@property (nonatomic) BOOL hasDurBin27;
@property (nonatomic) BOOL hasDurBin28;
@property (nonatomic) BOOL hasDurBin29;
@property (nonatomic) BOOL hasDurBin3;
@property (nonatomic) BOOL hasDurBin30;
@property (nonatomic) BOOL hasDurBin31;
@property (nonatomic) BOOL hasDurBin4;
@property (nonatomic) BOOL hasDurBin5;
@property (nonatomic) BOOL hasDurBin6;
@property (nonatomic) BOOL hasDurBin7;
@property (nonatomic) BOOL hasDurBin8;
@property (nonatomic) BOOL hasDurBin9;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int version; // ivar: _version


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