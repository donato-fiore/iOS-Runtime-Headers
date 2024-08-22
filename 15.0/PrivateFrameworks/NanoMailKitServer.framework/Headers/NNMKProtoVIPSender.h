// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPROTOVIPSENDER_H
#define NNMKPROTOVIPSENDER_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoVIPSender : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSMutableArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name; // ivar: _name


+(id)protoVIP:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emailAddressesAtIndex:(NSUInteger)arg0 ;
-(id)vipSender;
-(void)addEmailAddresses:(id)arg0 ;
-(void)clearEmailAddresses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif