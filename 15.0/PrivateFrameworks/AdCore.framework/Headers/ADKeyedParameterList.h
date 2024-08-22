// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADKEYEDPARAMETERLIST_H
#define ADKEYEDPARAMETERLIST_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ADKeyedParameterList : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSMutableArray *parameterLists; // ivar: _parameterLists


+(Class)parameterListType;
+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parameterListAtIndex:(NSUInteger)arg0 ;
-(void)addParameterList:(id)arg0 ;
-(void)clearParameterLists;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif