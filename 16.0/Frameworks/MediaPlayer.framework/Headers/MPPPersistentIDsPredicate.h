// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPPPERSISTENTIDSPREDICATE_H
#define MPPPERSISTENTIDSPREDICATE_H

@class PBCodable;
@protocol NSCopying;



@interface MPPPersistentIDsPredicate : PBCodable <NSCopying>

 {
    ? _persistentIDs;
    ? _has;
}


@property (nonatomic) BOOL hasShouldContain;
@property (readonly, nonatomic) *NSInteger persistentIDs;
@property (readonly, nonatomic) NSUInteger persistentIDsCount;
@property (nonatomic) BOOL shouldContain; // ivar: _shouldContain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)persistentIDsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addPersistentIDs:(NSInteger)arg0 ;
-(void)clearPersistentIDs;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif