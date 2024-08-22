// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBSIRIMEMORYREFERENCERESOLUTIONEVENT_H
#define BMPBSIRIMEMORYREFERENCERESOLUTIONEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *entityMapElements; // ivar: _entityMapElements
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entityMapElementsAtIndex:(NSUInteger)arg0 ;
-(void)addEntityMapElements:(id)arg0 ;
-(void)clearEntityMapElements;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif