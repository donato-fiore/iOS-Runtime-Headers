// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDMAILCOMPOSEATTACHMENTREPORT_H
#define AWDMAILCOMPOSEATTACHMENTREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMailComposeAttachmentReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger drawingInsertCount; // ivar: _drawingInsertCount
@property (nonatomic) NSInteger drawingSentCount; // ivar: _drawingSentCount
@property (nonatomic) BOOL hasDrawingInsertCount;
@property (nonatomic) BOOL hasDrawingSentCount;
@property (nonatomic) BOOL hasMessageSent;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL messageSent; // ivar: _messageSent
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