// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOUPDATEACCOUNTWITHIDENTIFIERREQUEST_H
#define NPKPROTOUPDATEACCOUNTWITHIDENTIFIERREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoUpdateAccountWithIdentifierRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) BOOL hasAccountIdentifier;


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