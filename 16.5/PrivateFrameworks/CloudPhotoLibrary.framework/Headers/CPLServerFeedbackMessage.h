// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSERVERFEEDBACKMESSAGE_H
#define CPLSERVERFEEDBACKMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CPLServerFeedbackMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *keysAndValues; // ivar: _keysAndValues


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keysAndValuesAtIndex:(NSUInteger)arg0 ;
-(void)addKeysAndValues:(id)arg0 ;
-(void)clearKeysAndValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif