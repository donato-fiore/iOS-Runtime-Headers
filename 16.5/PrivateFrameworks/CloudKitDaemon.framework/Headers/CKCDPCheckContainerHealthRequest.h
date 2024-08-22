// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCDPCHECKCONTAINERHEALTHREQUEST_H
#define CKCDPCHECKCONTAINERHEALTHREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface CKCDPCheckContainerHealthRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *containerName; // ivar: _containerName
@property (retain, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, nonatomic) BOOL hasContainerName;
@property (readonly, nonatomic) BOOL hasEnvironment;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif