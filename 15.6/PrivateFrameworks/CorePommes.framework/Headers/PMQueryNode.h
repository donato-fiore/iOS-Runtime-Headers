// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMQUERYNODE_H
#define PMQUERYNODE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface PMQueryNode : PBCodable <NSCopying>

 {
    ? _keys;
    ? _has;
}


@property (nonatomic) BOOL boolValue; // ivar: _boolValue
@property (retain, nonatomic) NSMutableArray *childs; // ivar: _childs
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) float floatValue; // ivar: _floatValue
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) BOOL hasMergeOp;
@property (nonatomic) BOOL hasOp;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) NSInteger intValue; // ivar: _intValue
@property (readonly, nonatomic) *int keys;
@property (readonly, nonatomic) NSUInteger keysCount;
@property (nonatomic) int mergeOp; // ivar: _mergeOp
@property (nonatomic) int op; // ivar: _op
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue


+(Class)childType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keysAsString:(int)arg0 ;
-(id)mergeOpAsString:(int)arg0 ;
-(id)opAsString:(int)arg0 ;
-(int)StringAsKeys:(id)arg0 ;
-(int)StringAsMergeOp:(id)arg0 ;
-(int)StringAsOp:(id)arg0 ;
-(int)keyAtIndex:(NSUInteger)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)addKey:(int)arg0 ;
-(void)clearChilds;
-(void)clearKeys;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif