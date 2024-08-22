// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBTASKAGNOSTICBEHAVIORSAMPLE_H
#define ATXPBTASKAGNOSTICBEHAVIORSAMPLE_H

@class PBCodable;
@protocol NSCopying;


#import "ATXPBTaskAgnosticBehaviorFeatureVector.h"

@interface ATXPBTaskAgnosticBehaviorSample : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL engaged; // ivar: _engaged
@property (retain, nonatomic) ATXPBTaskAgnosticBehaviorFeatureVector *featureVector; // ivar: _featureVector
@property (nonatomic) BOOL hasEngaged;
@property (readonly, nonatomic) BOOL hasFeatureVector;
@property (nonatomic) BOOL hasTimeIntervalSinceReferenceDate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) CGFloat timeIntervalSinceReferenceDate; // ivar: _timeIntervalSinceReferenceDate
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif