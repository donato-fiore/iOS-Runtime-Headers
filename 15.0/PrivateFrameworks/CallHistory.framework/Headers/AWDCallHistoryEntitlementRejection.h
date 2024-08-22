// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDCALLHISTORYENTITLEMENTREJECTION_H
#define AWDCALLHISTORYENTITLEMENTREJECTION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDCallHistoryEntitlementRejection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPid;
@property (readonly, nonatomic) BOOL hasProcname;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int pid; // ivar: _pid
@property (retain, nonatomic) NSString *procname; // ivar: _procname
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