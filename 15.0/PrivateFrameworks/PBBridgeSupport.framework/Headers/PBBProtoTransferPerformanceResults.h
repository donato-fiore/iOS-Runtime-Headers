// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBBPROTOTRANSFERPERFORMANCERESULTS_H
#define PBBPROTOTRANSFERPERFORMANCERESULTS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface PBBProtoTransferPerformanceResults : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *macroActivites; // ivar: _macroActivites
@property (retain, nonatomic) NSMutableArray *measures; // ivar: _measures
@property (retain, nonatomic) NSMutableArray *milestones; // ivar: _milestones


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)macroActivitesAtIndex:(NSUInteger)arg0 ;
-(id)measuresAtIndex:(NSUInteger)arg0 ;
-(id)milestonesAtIndex:(NSUInteger)arg0 ;
-(void)addMacroActivites:(id)arg0 ;
-(void)addMeasures:(id)arg0 ;
-(void)addMilestones:(id)arg0 ;
-(void)clearMacroActivites;
-(void)clearMeasures;
-(void)clearMilestones;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif