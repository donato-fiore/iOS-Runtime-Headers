// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATEMAPRESTORE_H
#define GEOLOGMSGSTATEMAPRESTORE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgStateMapRestore : PBCodable <NSCopying>

 {
    NSMutableArray *_targetLayouts;
}


@property (retain, nonatomic) NSMutableArray *targetLayouts;


+(BOOL)isValid:(id)arg0 ;
+(Class)targetLayoutType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)targetLayoutAtIndex:(NSUInteger)arg0 ;
-(void)addTargetLayout:(id)arg0 ;
-(void)clearTargetLayouts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif