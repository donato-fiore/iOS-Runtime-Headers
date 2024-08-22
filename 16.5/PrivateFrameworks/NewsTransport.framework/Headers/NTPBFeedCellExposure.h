// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBFEEDCELLEXPOSURE_H
#define NTPBFEEDCELLEXPOSURE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface NTPBFeedCellExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int displayRankInSection; // ivar: _displayRankInSection
@property (retain, nonatomic) NSData *feedCellHostExposureId; // ivar: _feedCellHostExposureId
@property (nonatomic) int feedCellHostType; // ivar: _feedCellHostType
@property (nonatomic) int feedCellSection; // ivar: _feedCellSection
@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (nonatomic) BOOL hasDisplayRankInSection;
@property (readonly, nonatomic) BOOL hasFeedCellHostExposureId;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasFeedCellSection;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (readonly, nonatomic) BOOL hasViewFrameInScreen;
@property (nonatomic) BOOL isUserSubscribedToFeed; // ivar: _isUserSubscribedToFeed
@property (retain, nonatomic) NSString *viewFrameInScreen; // ivar: _viewFrameInScreen


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedCellHostTypeAsString:(int)arg0 ;
-(id)feedCellSectionAsString:(int)arg0 ;
-(id)feedTypeAsString:(int)arg0 ;
-(int)StringAsFeedCellHostType:(id)arg0 ;
-(int)StringAsFeedCellSection:(id)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif