// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDPROACTIVEACTIONDATA_H
#define AWDPROACTIVEACTIONDATA_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "AWDProactiveAppPredictionSubscores.h"

@interface AWDProactiveActionData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionKey; // ivar: _actionKey
@property (nonatomic) int cacheRank; // ivar: _cacheRank
@property (retain, nonatomic) NSString *engaged; // ivar: _engaged
@property (nonatomic) BOOL engagedAction; // ivar: _engagedAction
@property (nonatomic) BOOL futureMedia; // ivar: _futureMedia
@property (readonly, nonatomic) BOOL hasActionKey;
@property (nonatomic) BOOL hasCacheRank;
@property (readonly, nonatomic) BOOL hasEngaged;
@property (nonatomic) BOOL hasEngagedAction;
@property (nonatomic) BOOL hasFutureMedia;
@property (readonly, nonatomic) BOOL hasHeuristicName;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasShown;
@property (readonly, nonatomic) BOOL hasSubscores;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *heuristicName; // ivar: _heuristicName
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) BOOL shown; // ivar: _shown
@property (retain, nonatomic) AWDProactiveAppPredictionSubscores *subscores; // ivar: _subscores
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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