// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGM2EVENTICSOPPORTUNITY_H
#define SGM2EVENTICSOPPORTUNITY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2EventICSOpportunity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL accountSetup; // ivar: _accountSetup
@property (nonatomic) BOOL hasAccountSetup;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasRecipient;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int recipient; // ivar: _recipient
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recipientAsString:(int)arg0 ;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsRecipient:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif