// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCODABLEDATABASECOMPETITION_H
#define ASCODABLEDATABASECOMPETITION_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ASCodableCloudKitCompetition.h"

@interface ASCodableDatabaseCompetition : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ASCodableCloudKitCompetition *competition; // ivar: _competition
@property (retain, nonatomic) NSData *friendUUID; // ivar: _friendUUID
@property (readonly, nonatomic) BOOL hasCompetition;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type; // ivar: _type


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