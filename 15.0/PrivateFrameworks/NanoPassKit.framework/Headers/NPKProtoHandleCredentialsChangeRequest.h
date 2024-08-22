// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOHANDLECREDENTIALSCHANGEREQUEST_H
#define NPKPROTOHANDLECREDENTIALSCHANGEREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;



@interface NPKProtoHandleCredentialsChangeRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *credentialsBytes; // ivar: _credentialsBytes
@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID; // ivar: _passID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialsBytesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCredentialsBytes:(id)arg0 ;
-(void)clearCredentialsBytes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif