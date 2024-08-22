// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTRACEPLAYBACKDETAILS_H
#define MNTRACEPLAYBACKDETAILS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface MNTracePlaybackDetails : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *bookmarks; // ivar: _bookmarks
@property (nonatomic) CGFloat currentPosition; // ivar: _currentPosition
@property (nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) BOOL hasCurrentPosition;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasPedestrianTracePath;
@property (nonatomic) BOOL hasPedestrianTraceStartRelativeTimestamp;
@property (nonatomic) BOOL hasRecordedBookmarkID;
@property (nonatomic) BOOL hasTraceDuration;
@property (readonly, nonatomic) BOOL hasTracePath;
@property (retain, nonatomic) NSString *pedestrianTracePath; // ivar: _pedestrianTracePath
@property (nonatomic) CGFloat pedestrianTraceStartRelativeTimestamp; // ivar: _pedestrianTraceStartRelativeTimestamp
@property (nonatomic) unsigned int recordedBookmarkID; // ivar: _recordedBookmarkID
@property (nonatomic) CGFloat traceDuration; // ivar: _traceDuration
@property (retain, nonatomic) NSString *tracePath; // ivar: _tracePath


+(Class)bookmarkType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bookmarkAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)addBookmark:(id)arg0 ;
-(void)clearBookmarks;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif