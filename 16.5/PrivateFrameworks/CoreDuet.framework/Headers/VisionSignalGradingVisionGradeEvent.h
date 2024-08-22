// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VISIONSIGNALGRADINGVISIONGRADEEVENT_H
#define VISIONSIGNALGRADINGVISIONGRADEEVENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface VisionSignalGradingVisionGradeEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *popularityEntries; // ivar: _popularityEntries
@property (retain, nonatomic) NSMutableArray *visionGrades; // ivar: _visionGrades


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)popularityEntriesAtIndex:(NSUInteger)arg0 ;
-(id)visionGradesAtIndex:(NSUInteger)arg0 ;
-(void)addPopularityEntries:(id)arg0 ;
-(void)addVisionGrades:(id)arg0 ;
-(void)clearPopularityEntries;
-(void)clearVisionGrades;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif