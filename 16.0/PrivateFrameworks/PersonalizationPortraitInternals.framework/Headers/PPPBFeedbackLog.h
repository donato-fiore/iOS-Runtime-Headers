// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPBFEEDBACKLOG_H
#define PPPBFEEDBACKLOG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "PPPBFeedbackMetadata.h"

@interface PPPBFeedbackLog : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (retain, nonatomic) NSMutableArray *experimentalGroups; // ivar: _experimentalGroups
@property (retain, nonatomic) NSMutableArray *extractedDonations; // ivar: _extractedDonations
@property (retain, nonatomic) PPPBFeedbackMetadata *feedbackMetadata; // ivar: _feedbackMetadata
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (readonly, nonatomic) BOOL hasFeedbackMetadata;
@property (readonly, nonatomic) BOOL hasHomeLocationGeohash;
@property (nonatomic) BOOL hasPredictionType;
@property (retain, nonatomic) NSString *homeLocationGeohash; // ivar: _homeLocationGeohash
@property (nonatomic) int predictionType; // ivar: _predictionType
@property (retain, nonatomic) NSMutableArray *scoredItems; // ivar: _scoredItems


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)experimentalGroupsAtIndex:(NSUInteger)arg0 ;
-(id)extractedDonationsAtIndex:(NSUInteger)arg0 ;
-(id)scoredItemsAtIndex:(NSUInteger)arg0 ;
-(void)addExperimentalGroups:(id)arg0 ;
-(void)addExtractedDonations:(id)arg0 ;
-(void)addScoredItems:(id)arg0 ;
-(void)clearExperimentalGroups;
-(void)clearExtractedDonations;
-(void)clearScoredItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif