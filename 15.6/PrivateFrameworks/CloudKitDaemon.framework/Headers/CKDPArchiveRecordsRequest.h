// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPARCHIVERECORDSREQUEST_H
#define CKDPARCHIVERECORDSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *idsToArchives; // ivar: _idsToArchives


+(Class)idsToArchiveType;
+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)idsToArchiveAtIndex:(NSUInteger)arg0 ;
-(void)addIdsToArchive:(id)arg0 ;
-(void)clearIdsToArchives;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif