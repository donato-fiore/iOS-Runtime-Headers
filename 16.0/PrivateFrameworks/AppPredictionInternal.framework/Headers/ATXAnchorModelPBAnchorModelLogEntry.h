// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELPBANCHORMODELLOGENTRY_H
#define ATXANCHORMODELPBANCHORMODELLOGENTRY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "ATXAnchorModelPBAnchorMetadata.h"

@interface ATXAnchorModelPBAnchorModelLogEntry : PBCodable <NSCopying>



@property (retain, nonatomic) ATXAnchorModelPBAnchorMetadata *anchor; // ivar: _anchor
@property (readonly, nonatomic) BOOL hasAnchor;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSMutableArray *negativeActions; // ivar: _negativeActions
@property (retain, nonatomic) NSMutableArray *negativeAppLaunches; // ivar: _negativeAppLaunches
@property (retain, nonatomic) NSMutableArray *positiveActions; // ivar: _positiveActions
@property (retain, nonatomic) NSMutableArray *positiveAppLaunches; // ivar: _positiveAppLaunches
@property (retain, nonatomic) NSString *userId; // ivar: _userId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)negativeActionsAtIndex:(NSUInteger)arg0 ;
-(id)negativeAppLaunchesAtIndex:(NSUInteger)arg0 ;
-(id)positiveActionsAtIndex:(NSUInteger)arg0 ;
-(id)positiveAppLaunchesAtIndex:(NSUInteger)arg0 ;
-(void)addNegativeActions:(id)arg0 ;
-(void)addNegativeAppLaunches:(id)arg0 ;
-(void)addPositiveActions:(id)arg0 ;
-(void)addPositiveAppLaunches:(id)arg0 ;
-(void)clearNegativeActions;
-(void)clearNegativeAppLaunches;
-(void)clearPositiveActions;
-(void)clearPositiveAppLaunches;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif