// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCDPINITIALIZECONTAINERREQUEST_H
#define CKCDPINITIALIZECONTAINERREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface CKCDPInitializeContainerRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *containerName; // ivar: _containerName
@property (retain, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, nonatomic) BOOL hasContainerName;
@property (readonly, nonatomic) BOOL hasEnvironment;
@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) NSString *path; // ivar: _path


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