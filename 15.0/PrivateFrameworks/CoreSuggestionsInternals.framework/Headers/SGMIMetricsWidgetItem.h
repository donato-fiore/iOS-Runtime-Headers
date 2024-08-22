// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSWIDGETITEM_H
#define SGMIMETRICSWIDGETITEM_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsWidgetItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsRead;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL hasSaliencyScore;
@property (nonatomic) BOOL isRead; // ivar: _isRead
@property (nonatomic) NSUInteger messageId; // ivar: _messageId
@property (nonatomic) CGFloat saliencyScore; // ivar: _saliencyScore


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