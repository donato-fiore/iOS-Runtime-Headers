// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCODABLEACTIVITYDATAPREVIEW_H
#define ASCODABLEACTIVITYDATAPREVIEW_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "ASCodableCloudKitActivitySnapshot.h"

@interface ASCodableActivityDataPreview : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *achievements; // ivar: _achievements
@property (retain, nonatomic) ASCodableCloudKitActivitySnapshot *activitySnapshot; // ivar: _activitySnapshot
@property (nonatomic) CGFloat date; // ivar: _date
@property (readonly, nonatomic) BOOL hasActivitySnapshot;
@property (nonatomic) BOOL hasDate;
@property (retain, nonatomic) NSMutableArray *workouts; // ivar: _workouts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)achievementsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)workoutsAtIndex:(NSUInteger)arg0 ;
-(void)addAchievements:(id)arg0 ;
-(void)addWorkouts:(id)arg0 ;
-(void)clearAchievements;
-(void)clearWorkouts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif