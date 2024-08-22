// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELPBLAUNCHHISTORYMETADATA_H
#define ATXANCHORMODELPBLAUNCHHISTORYMETADATA_H

@class PBCodable;
@protocol NSCopying;



@interface ATXAnchorModelPBLaunchHistoryMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLaunchesInLast12Hours;
@property (nonatomic) BOOL hasLaunchesInLast14Days;
@property (nonatomic) BOOL hasLaunchesInLast24Hours;
@property (nonatomic) BOOL hasLaunchesInLast28Days;
@property (nonatomic) BOOL hasLaunchesInLast2Hours;
@property (nonatomic) BOOL hasLaunchesInLast48Hours;
@property (nonatomic) BOOL hasLaunchesInLast7Days;
@property (nonatomic) unsigned int launchesInLast12Hours; // ivar: _launchesInLast12Hours
@property (nonatomic) unsigned int launchesInLast14Days; // ivar: _launchesInLast14Days
@property (nonatomic) unsigned int launchesInLast24Hours; // ivar: _launchesInLast24Hours
@property (nonatomic) unsigned int launchesInLast28Days; // ivar: _launchesInLast28Days
@property (nonatomic) unsigned int launchesInLast2Hours; // ivar: _launchesInLast2Hours
@property (nonatomic) unsigned int launchesInLast48Hours; // ivar: _launchesInLast48Hours
@property (nonatomic) unsigned int launchesInLast7Days; // ivar: _launchesInLast7Days


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