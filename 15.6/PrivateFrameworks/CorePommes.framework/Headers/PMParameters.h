// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMPARAMETERS_H
#define PMPARAMETERS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface PMParameters : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *keyvalues; // ivar: _keyvalues


+(Class)keyvalueType;
+(id)log;
-(BOOL)boolValueForKey:(id)arg0 ;
-(BOOL)boolValueForKey:(id)arg0 fallbackParameters:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)intValueForKey:(id)arg0 ;
-(NSInteger)intValueForKey:(id)arg0 fallbackParameters:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fallbackKeyValueForKey:(id)arg0 fallbackParameters:(id)arg1 ;
-(id)floatValueForKey:(id)arg0 ;
-(id)floatValueForKey:(id)arg0 fallbackParameters:(id)arg1 ;
-(id)keyvalueAtIndex:(NSUInteger)arg0 ;
-(id)kvForKey:(id)arg0 fallbackParameters:(id)arg1 ;
-(id)parameterKeyValueForKey:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 fallbackParameters:(id)arg1 ;
-(void)addKeyvalue:(id)arg0 ;
-(void)clearKeyvalues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif