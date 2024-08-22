// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRAMPINGREQUEST_H
#define CPLRAMPINGREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface CPLRampingRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *requests; // ivar: _requests


+(Class)requestType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requestAtIndex:(NSUInteger)arg0 ;
-(void)addRequest:(id)arg0 ;
-(void)clearRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif