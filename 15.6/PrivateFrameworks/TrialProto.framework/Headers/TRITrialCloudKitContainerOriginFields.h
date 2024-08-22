// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRITRIALCLOUDKITCONTAINERORIGINFIELDS_H
#define TRITRIALCLOUDKITCONTAINERORIGINFIELDS_H

@class PBCodable;
@protocol NSCopying;



@interface TRITrialCloudKitContainerOriginFields : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ckContainer; // ivar: _ckContainer
@property (nonatomic) int ckEnvironment; // ivar: _ckEnvironment
@property (nonatomic) BOOL hasCkContainer;
@property (nonatomic) BOOL hasCkEnvironment;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)ckContainerAsString:(int)arg0 ;
-(id)ckEnvironmentAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCkContainer:(id)arg0 ;
-(int)StringAsCkEnvironment:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif