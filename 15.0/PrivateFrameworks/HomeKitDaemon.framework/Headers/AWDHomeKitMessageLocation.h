// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITMESSAGELOCATION_H
#define AWDHOMEKITMESSAGELOCATION_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitMessageLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (nonatomic) BOOL hasAccuracy;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasNumOfReachableBTLEAcc;
@property (nonatomic) BOOL hasNumOfReachableIPAcc;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) unsigned int numOfReachableBTLEAcc; // ivar: _numOfReachableBTLEAcc
@property (nonatomic) unsigned int numOfReachableIPAcc; // ivar: _numOfReachableIPAcc
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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