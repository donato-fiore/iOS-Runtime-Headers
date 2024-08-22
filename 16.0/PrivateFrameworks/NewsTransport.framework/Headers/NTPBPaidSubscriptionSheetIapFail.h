// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPAIDSUBSCRIPTIONSHEETIAPFAIL_H
#define NTPBPAIDSUBSCRIPTIONSHEETIAPFAIL_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBPaidSubscriptionSheetIapFail : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *articleId; // ivar: _articleId
@property (retain, nonatomic) NSString *failedIapId; // ivar: _failedIapId
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasFailedIapId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif