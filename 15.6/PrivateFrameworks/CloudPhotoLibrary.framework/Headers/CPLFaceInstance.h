// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLFACEINSTANCE_H
#define CPLFACEINSTANCE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface CPLFaceInstance : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat centerX; // ivar: _centerX
@property (nonatomic) CGFloat centerY; // ivar: _centerY
@property (nonatomic) unsigned int faceState; // ivar: _faceState
@property (nonatomic) BOOL hasCenterX;
@property (nonatomic) BOOL hasCenterY;
@property (nonatomic) BOOL hasFaceState;
@property (nonatomic) BOOL hasNameSource;
@property (readonly, nonatomic) BOOL hasPersonIdentifier;
@property (nonatomic) BOOL hasSize;
@property (nonatomic, getter=isKeyFace) BOOL keyFace;
@property (nonatomic, getter=isManual) BOOL manual;
@property (nonatomic) unsigned int nameSource; // ivar: _nameSource
@property (readonly, nonatomic, getter=isNoneState) BOOL noneState;
@property (retain, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers; // ivar: _rejectedPersonIdentifiers
@property (nonatomic) CGFloat size; // ivar: _size


-(BOOL)_isFaceStateBitSet:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pointerDescription;
-(id)rejectedPersonIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addRejectedPersonIdentifiers:(id)arg0 ;
-(void)clearRejectedPersonIdentifiers;
-(void)clearState;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif