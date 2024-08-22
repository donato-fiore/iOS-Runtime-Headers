// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBPREDICTIONUSERCONTEXT_H
#define ATXPBPREDICTIONUSERCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBPredictionUserContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLastAppActionLaunch;
@property (readonly, nonatomic) BOOL hasLastAppLaunch;
@property (nonatomic) BOOL hasLastAppLaunchDate;
@property (nonatomic) BOOL hasLastUnlockDate;
@property (readonly, nonatomic) BOOL hasSecondMostRecentAppLaunch;
@property (retain, nonatomic) NSString *lastAppActionLaunch; // ivar: _lastAppActionLaunch
@property (retain, nonatomic) NSString *lastAppLaunch; // ivar: _lastAppLaunch
@property (nonatomic) CGFloat lastAppLaunchDate; // ivar: _lastAppLaunchDate
@property (nonatomic) CGFloat lastUnlockDate; // ivar: _lastUnlockDate
@property (retain, nonatomic) NSString *secondMostRecentAppLaunch; // ivar: _secondMostRecentAppLaunch


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif