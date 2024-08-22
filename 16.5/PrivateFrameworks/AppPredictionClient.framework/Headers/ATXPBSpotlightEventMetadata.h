// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBSPOTLIGHTEVENTMETADATA_H
#define ATXPBSPOTLIGHTEVENTMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL didSearchDuringSession; // ivar: _didSearchDuringSession
@property (retain, nonatomic) NSString *engagedAppString; // ivar: _engagedAppString
@property (nonatomic) BOOL hasDidSearchDuringSession;
@property (readonly, nonatomic) BOOL hasEngagedAppString;
@property (readonly, nonatomic) BOOL hasQueryAtEngagement;
@property (nonatomic) BOOL hasSearchEngagedActionType;
@property (readonly, nonatomic) BOOL hasSearchEngagedBundleId;
@property (retain, nonatomic) NSString *queryAtEngagement; // ivar: _queryAtEngagement
@property (nonatomic) NSUInteger searchEngagedActionType; // ivar: _searchEngagedActionType
@property (retain, nonatomic) NSString *searchEngagedBundleId; // ivar: _searchEngagedBundleId


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