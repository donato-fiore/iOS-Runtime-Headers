// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSANALYTICSSAFARICKBOOKMARKSMIGRATIONFINISHEDEVENT_H
#define WBSANALYTICSSAFARICKBOOKMARKSMIGRATIONFINISHEDEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WBSAnalyticsSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (copy, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasMigratorType;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int migratorType; // ivar: _migratorType
@property (nonatomic) int result; // ivar: _result
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)migratorTypeAsString:(int)arg0 ;
-(id)resultAsString:(int)arg0 ;
-(int)StringAsMigratorType:(id)arg0 ;
-(int)StringAsResult:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif