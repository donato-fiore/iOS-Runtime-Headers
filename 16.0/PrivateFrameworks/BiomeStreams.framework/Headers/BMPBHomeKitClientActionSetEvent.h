// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBHOMEKITCLIENTACTIONSETEVENT_H
#define BMPBHOMEKITCLIENTACTIONSETEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "BMPBHomeKitClientBase.h"

@interface BMPBHomeKitClientActionSetEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionSetName; // ivar: _actionSetName
@property (retain, nonatomic) NSString *actionSetType; // ivar: _actionSetType
@property (retain, nonatomic) NSString *actionSetUniqueIdentifier; // ivar: _actionSetUniqueIdentifier
@property (retain, nonatomic) NSMutableArray *associatedAccessoryUniqueIdentifiers; // ivar: _associatedAccessoryUniqueIdentifiers
@property (retain, nonatomic) BMPBHomeKitClientBase *base; // ivar: _base
@property (readonly, nonatomic) BOOL hasActionSetName;
@property (readonly, nonatomic) BOOL hasActionSetType;
@property (readonly, nonatomic) BOOL hasActionSetUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (retain, nonatomic) NSString *homeName; // ivar: _homeName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)associatedAccessoryUniqueIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAssociatedAccessoryUniqueIdentifiers:(id)arg0 ;
-(void)clearAssociatedAccessoryUniqueIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif