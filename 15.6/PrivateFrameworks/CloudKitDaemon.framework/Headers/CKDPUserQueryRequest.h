// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPUSERQUERYREQUEST_H
#define CKDPUSERQUERYREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol NSCopying;


#import "CKDPUserAlias.h"

@interface CKDPUserQueryRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPUserAlias *alias; // ivar: _alias
@property (readonly, nonatomic) BOOL hasAlias;
@property (readonly, nonatomic) BOOL hasOBSOLETEPcsServiceType;
@property (nonatomic) BOOL hasPublicKeyRequested;
@property (retain, nonatomic) NSString *oBSOLETEPcsServiceType; // ivar: _oBSOLETEPcsServiceType
@property (nonatomic) BOOL publicKeyRequested; // ivar: _publicKeyRequested
@property (retain, nonatomic) NSMutableArray *sortedBys; // ivar: _sortedBys


+(Class)sortedByType;
+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sortedByAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addSortedBy:(id)arg0 ;
-(void)clearSortedBys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif