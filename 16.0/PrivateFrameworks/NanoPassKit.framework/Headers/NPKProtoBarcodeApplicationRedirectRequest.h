// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOBARCODEAPPLICATIONREDIRECTREQUEST_H
#define NPKPROTOBARCODEAPPLICATIONREDIRECTREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoBarcodeApplicationRedirectRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *appLaunchToken; // ivar: _appLaunchToken
@property (readonly, nonatomic) BOOL hasAppLaunchToken;
@property (readonly, nonatomic) BOOL hasPassData;
@property (readonly, nonatomic) BOOL hasTransactionData;
@property (retain, nonatomic) NSData *passData; // ivar: _passData
@property (retain, nonatomic) NSData *transactionData; // ivar: _transactionData


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