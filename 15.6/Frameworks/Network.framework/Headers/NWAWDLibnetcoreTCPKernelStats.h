// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWAWDLIBNETCORETCPKERNELSTATS_H
#define NWAWDLIBNETCORETCPKERNELSTATS_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreTCPKernelStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumTfoBlackholed;
@property (nonatomic) BOOL hasNumTfoCookieInvalid;
@property (nonatomic) BOOL hasNumTfoCookieRcv;
@property (nonatomic) BOOL hasNumTfoCookieReq;
@property (nonatomic) BOOL hasNumTfoCookieReqRcv;
@property (nonatomic) BOOL hasNumTfoCookieSent;
@property (nonatomic) BOOL hasNumTfoFallback;
@property (nonatomic) BOOL hasNumTfoSynDataAcked;
@property (nonatomic) BOOL hasNumTfoSynDataRcv;
@property (nonatomic) BOOL hasNumTfoSynDataSent;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger numTfoBlackholed; // ivar: _numTfoBlackholed
@property (nonatomic) NSUInteger numTfoCookieInvalid; // ivar: _numTfoCookieInvalid
@property (nonatomic) NSUInteger numTfoCookieRcv; // ivar: _numTfoCookieRcv
@property (nonatomic) NSUInteger numTfoCookieReq; // ivar: _numTfoCookieReq
@property (nonatomic) NSUInteger numTfoCookieReqRcv; // ivar: _numTfoCookieReqRcv
@property (nonatomic) NSUInteger numTfoCookieSent; // ivar: _numTfoCookieSent
@property (nonatomic) NSUInteger numTfoFallback; // ivar: _numTfoFallback
@property (nonatomic) NSUInteger numTfoSynDataAcked; // ivar: _numTfoSynDataAcked
@property (nonatomic) NSUInteger numTfoSynDataRcv; // ivar: _numTfoSynDataRcv
@property (nonatomic) NSUInteger numTfoSynDataSent; // ivar: _numTfoSynDataSent
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