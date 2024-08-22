// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELPBAPPLAUNCHMETADATA_H
#define ATXANCHORMODELPBAPPLAUNCHMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXAnchorModelPBLaunchHistoryMetadata.h"

@interface ATXAnchorModelPBAppLaunchMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger app2VecCluster; // ivar: _app2VecCluster
@property (nonatomic) BOOL appInstalledInLast48Hours; // ivar: _appInstalledInLast48Hours
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *appLaunchHistory; // ivar: _appLaunchHistory
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSInteger genreId; // ivar: _genreId
@property (nonatomic) BOOL hasApp2VecCluster;
@property (nonatomic) BOOL hasAppInstalledInLast48Hours;
@property (readonly, nonatomic) BOOL hasAppLaunchHistory;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasGenreId;
@property (nonatomic) BOOL hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds; // ivar: _relativeTimeSinceAnchorInSeconds


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