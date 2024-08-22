// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSTORABLEFEEDBACKITEM_H
#define PPSTORABLEFEEDBACKITEM_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPStorableFeedbackItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int feedbackType; // ivar: _feedbackType
@property (nonatomic) BOOL hasFeedbackType;
@property (readonly, nonatomic) BOOL hasItemString;
@property (retain, nonatomic) NSString *itemString; // ivar: _itemString


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