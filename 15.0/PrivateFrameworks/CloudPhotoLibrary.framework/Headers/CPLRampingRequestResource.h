// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLRAMPINGREQUESTRESOURCE_H
#define CPLRAMPINGREQUESTRESOURCE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CPLRampingRequestResource : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumRequested;
@property (readonly, nonatomic) BOOL hasResource;
@property (nonatomic) NSInteger numRequested; // ivar: _numRequested
@property (retain, nonatomic) NSString *resource; // ivar: _resource


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