// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFREEMOMENTDATACOLLECTIONPBFREEMOMENTLOGENTRY_H
#define ATXFREEMOMENTDATACOLLECTIONPBFREEMOMENTLOGENTRY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXFreeMomentDataCollectionPBFeatureVector.h"

@interface ATXFreeMomentDataCollectionPBFreeMomentLogEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *freeMomentReason; // ivar: _freeMomentReason
@property (readonly, nonatomic) BOOL hasFreeMomentReason;
@property (nonatomic) BOOL hasIsStaleNotification;
@property (readonly, nonatomic) BOOL hasUserFeatureVector;
@property (readonly, nonatomic) BOOL hasUserFeedback;
@property (nonatomic) BOOL hasUserResponse;
@property (nonatomic) BOOL isStaleNotification; // ivar: _isStaleNotification
@property (retain, nonatomic) ATXFreeMomentDataCollectionPBFeatureVector *userFeatureVector; // ivar: _userFeatureVector
@property (retain, nonatomic) NSString *userFeedback; // ivar: _userFeedback
@property (nonatomic) BOOL userResponse; // ivar: _userResponse


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