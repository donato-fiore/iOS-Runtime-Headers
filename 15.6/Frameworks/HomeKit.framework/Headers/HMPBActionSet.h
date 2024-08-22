// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMPBACTIONSET_H
#define HMPBACTIONSET_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface HMPBActionSet : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionSetType; // ivar: _actionSetType
@property (retain, nonatomic) NSMutableArray *actions; // ivar: _actions
@property (readonly, nonatomic) BOOL hasActionSetType;
@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *homeUUID; // ivar: _homeUUID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addActions:(id)arg0 ;
-(void)clearActions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif