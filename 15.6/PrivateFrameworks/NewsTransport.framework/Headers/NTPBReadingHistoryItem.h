// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBREADINGHISTORYITEM_H
#define NTPBREADINGHISTORYITEM_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBReadingHistoryItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleID; // ivar: _articleID
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NTPBDate *firstSeenDate; // ivar: _firstSeenDate
@property (retain, nonatomic) NTPBDate *firstSeenDateOfMaxVersionSeen; // ivar: _firstSeenDateOfMaxVersionSeen
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hasArticleID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (readonly, nonatomic) BOOL hasFirstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateOfMaxVersionSeen;
@property (nonatomic) BOOL hasFlags;
@property (readonly, nonatomic) BOOL hasLastListened;
@property (readonly, nonatomic) BOOL hasLastVisitedDate;
@property (nonatomic) BOOL hasListenedCount;
@property (nonatomic) BOOL hasListeningProgress;
@property (readonly, nonatomic) BOOL hasListeningProgressSavedDate;
@property (nonatomic) BOOL hasMaxVersionRead;
@property (nonatomic) BOOL hasMaxVersionSeen;
@property (nonatomic) BOOL hasReadCount;
@property (readonly, nonatomic) BOOL hasReadingPosition;
@property (readonly, nonatomic) BOOL hasReadingPositionSavedDate;
@property (readonly, nonatomic) BOOL hasSourceChannelTagID;
@property (retain, nonatomic) NTPBDate *lastListened; // ivar: _lastListened
@property (retain, nonatomic) NTPBDate *lastVisitedDate; // ivar: _lastVisitedDate
@property (nonatomic) NSInteger listenedCount; // ivar: _listenedCount
@property (nonatomic) CGFloat listeningProgress; // ivar: _listeningProgress
@property (retain, nonatomic) NTPBDate *listeningProgressSavedDate; // ivar: _listeningProgressSavedDate
@property (nonatomic) NSInteger maxVersionRead; // ivar: _maxVersionRead
@property (nonatomic) NSInteger maxVersionSeen; // ivar: _maxVersionSeen
@property (nonatomic) NSInteger readCount; // ivar: _readCount
@property (retain, nonatomic) NSString *readingPosition; // ivar: _readingPosition
@property (retain, nonatomic) NTPBDate *readingPositionSavedDate; // ivar: _readingPositionSavedDate
@property (retain, nonatomic) NSString *sourceChannelTagID; // ivar: _sourceChannelTagID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif