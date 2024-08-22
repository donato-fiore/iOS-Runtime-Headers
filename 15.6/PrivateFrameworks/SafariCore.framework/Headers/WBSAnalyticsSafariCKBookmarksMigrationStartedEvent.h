// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSANALYTICSSAFARICKBOOKMARKSMIGRATIONSTARTEDEVENT_H
#define WBSANALYTICSSAFARICKBOOKMARKSMIGRATIONSTARTEDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLocalState;
@property (nonatomic) BOOL hasMigratorType;
@property (nonatomic) BOOL hasRemoteState;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSInteger localState; // ivar: _localState
@property (nonatomic) int migratorType; // ivar: _migratorType
@property (nonatomic) NSInteger remoteState; // ivar: _remoteState
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)migratorTypeAsString:(int)arg0 ;
-(int)StringAsMigratorType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif