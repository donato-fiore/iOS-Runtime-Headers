// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPPASSLOCATION_H
#define CLPPASSLOCATION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "CLPLocation.h"

@interface CLPPassLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat age; // ivar: _age
@property (retain, nonatomic) NSMutableArray *associatedStoreIds; // ivar: _associatedStoreIds
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasServerHash;
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (nonatomic) int passSource; // ivar: _passSource
@property (retain, nonatomic) NSString *passTypeId; // ivar: _passTypeId
@property (nonatomic) int serverHash; // ivar: _serverHash


+(Class)associatedStoreIdType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)associatedStoreIdAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAssociatedStoreId:(id)arg0 ;
-(void)clearAssociatedStoreIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif