// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKPROTOFETCHBATCHREQUEST_H
#define NNMKPROTOFETCHBATCHREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoFetchBatchRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *fetchRequests; // ivar: _fetchRequests
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) BOOL hasWantsBatchedResponse;
@property (nonatomic) BOOL wantsBatchedResponse; // ivar: _wantsBatchedResponse


+(Class)fetchRequestType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fetchRequestAtIndex:(NSUInteger)arg0 ;
-(void)addFetchRequest:(id)arg0 ;
-(void)clearFetchRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif