// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSMAILATTACHMENTHISTOGRAMBYCATEGORY_H
#define SGMIMETRICSMAILATTACHMENTHISTOGRAMBYCATEGORY_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsMailAttachmentHistogramByCategory : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int category; // ivar: _category
@property (nonatomic) int count128KBTo512KB; // ivar: _count128KBTo512KB
@property (nonatomic) int count32KBTo128KB; // ivar: _count32KBTo128KB
@property (nonatomic) int count512KBTo2MB; // ivar: _count512KBTo2MB
@property (nonatomic) int count8KBTo32KB; // ivar: _count8KBTo32KB
@property (nonatomic) int countOver2MB; // ivar: _countOver2MB
@property (nonatomic) int countUpTo8KB; // ivar: _countUpTo8KB
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasCount128KBTo512KB;
@property (nonatomic) BOOL hasCount32KBTo128KB;
@property (nonatomic) BOOL hasCount512KBTo2MB;
@property (nonatomic) BOOL hasCount8KBTo32KB;
@property (nonatomic) BOOL hasCountOver2MB;
@property (nonatomic) BOOL hasCountUpTo8KB;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) NSUInteger messageId; // ivar: _messageId
@property (nonatomic) NSUInteger userId; // ivar: _userId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCategory:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif