// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSANALYTICSSAFARIUNABLETOSILENTLYMIGRATETOCKBOOKMARKSEVENT_H
#define WBSANALYTICSSAFARIUNABLETOSILENTLYMIGRATETOCKBOOKMARKSEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariUnableToSilentlyMigrateToCKBookmarksEvent : PBCodable <NSCopying>

 {
    ? _reasons;
    ? _has;
}


@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) *int reasons;
@property (readonly, nonatomic) NSUInteger reasonsCount;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonsAsString:(int)arg0 ;
-(int)StringAsReasons:(id)arg0 ;
-(int)reasonAtIndex:(NSUInteger)arg0 ;
-(void)addReason:(int)arg0 ;
-(void)clearReasons;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif