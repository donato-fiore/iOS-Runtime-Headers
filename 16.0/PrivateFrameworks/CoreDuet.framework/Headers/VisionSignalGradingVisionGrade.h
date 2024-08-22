// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VISIONSIGNALGRADINGVISIONGRADE_H
#define VISIONSIGNALGRADINGVISIONGRADE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface VisionSignalGradingVisionGrade : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int childAge; // ivar: _childAge
@property (nonatomic) BOOL childGrade; // ivar: _childGrade
@property (nonatomic) BOOL extractedGrade; // ivar: _extractedGrade
@property (retain, nonatomic) NSMutableArray *extractedSignals; // ivar: _extractedSignals
@property (nonatomic) BOOL hasChildAge;
@property (nonatomic) BOOL hasChildGrade;
@property (nonatomic) BOOL hasExtractedGrade;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasImageGrade;
@property (nonatomic) BOOL hasNumPeople;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL imageGrade; // ivar: _imageGrade
@property (nonatomic) int numPeople; // ivar: _numPeople


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)extractedSignalsAtIndex:(NSUInteger)arg0 ;
-(void)addExtractedSignals:(id)arg0 ;
-(void)clearExtractedSignals;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif