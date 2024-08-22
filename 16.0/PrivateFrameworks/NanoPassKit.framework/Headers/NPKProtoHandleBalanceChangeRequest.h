// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOHANDLEBALANCECHANGEREQUEST_H
#define NPKPROTOHANDLEBALANCECHANGEREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;



@interface NPKProtoHandleBalanceChangeRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *balanceBytes; // ivar: _balanceBytes
@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID; // ivar: _passID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)balanceBytesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBalanceBytes:(id)arg0 ;
-(void)clearBalanceBytes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif