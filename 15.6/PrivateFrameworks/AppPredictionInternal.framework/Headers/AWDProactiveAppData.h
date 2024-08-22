// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDPROACTIVEAPPDATA_H
#define AWDPROACTIVEAPPDATA_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "AWDProactiveAppPredictionSubscores.h"

@interface AWDProactiveAppData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL engagedApp; // ivar: _engagedApp
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasEngagedApp;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasSubscores;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
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