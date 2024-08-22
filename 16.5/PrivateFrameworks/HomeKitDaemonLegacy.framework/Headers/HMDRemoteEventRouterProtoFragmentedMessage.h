// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERPROTOFRAGMENTEDMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOFRAGMENTEDMESSAGE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *fragmentData; // ivar: _fragmentData
@property (nonatomic) unsigned int fragmentNumber; // ivar: _fragmentNumber
@property (readonly, nonatomic) BOOL hasFragmentData;
@property (nonatomic) BOOL hasFragmentNumber;
@property (nonatomic) BOOL hasRouterVersion;
@property (nonatomic) BOOL hasTotalFragments;
@property (nonatomic) BOOL hasTotalSize;
@property (nonatomic) unsigned int routerVersion; // ivar: _routerVersion
@property (nonatomic) NSUInteger totalFragments; // ivar: _totalFragments
@property (nonatomic) NSUInteger totalSize; // ivar: _totalSize


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