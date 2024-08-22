// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPROTOCONTENTREQUEST_H
#define NNMKPROTOCONTENTREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NNMKProtoContentRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) BOOL hasHighPriority;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId


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