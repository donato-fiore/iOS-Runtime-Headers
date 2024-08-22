// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSANALYTICSSAFARIDIDRECEIVEINVALIDMESSAGEFROMWEBPROCESSEVENT_H
#define WBSANALYTICSSAFARIDIDRECEIVEINVALIDMESSAGEFROMWEBPROCESSEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WBSAnalyticsSafariDidReceiveInvalidMessageFromWebProcessEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMessageName;
@property (nonatomic) BOOL hasTimestamp;
@property (copy, nonatomic) NSString *messageName; // ivar: _messageName
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