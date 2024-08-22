// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKPROTOMOREMESSAGESBATCHREQUEST_H
#define NNMKPROTOMOREMESSAGESBATCHREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoMoreMessagesBatchRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (nonatomic) BOOL hasFullSyncVersion;
@property (retain, nonatomic) NSMutableArray *moreMessagesRequests; // ivar: _moreMessagesRequests


+(Class)moreMessagesRequestType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)moreMessagesRequestAtIndex:(NSUInteger)arg0 ;
-(void)addMoreMessagesRequest:(id)arg0 ;
-(void)clearMoreMessagesRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif