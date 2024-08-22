// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDMAILMESSAGEBODY_H
#define AWDMAILMESSAGEBODY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDMailMessageBody : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMimeSubtype;
@property (readonly, nonatomic) BOOL hasMimeType;
@property (nonatomic) BOOL hasTotalTextSize;
@property (retain, nonatomic) NSString *mimeSubtype; // ivar: _mimeSubtype
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (nonatomic) NSUInteger totalTextSize; // ivar: _totalTextSize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithMIMEBody:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif