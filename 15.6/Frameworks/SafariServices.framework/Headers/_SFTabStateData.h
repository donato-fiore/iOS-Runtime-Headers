// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFTABSTATEDATA_H
#define _SFTABSTATEDATA_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface _SFTabStateData : NSObject

@property (retain, nonatomic) NSString *UUIDString; // ivar: _UUIDString
@property (readonly, nonatomic) NSData *compressedSessionStateData;
@property (nonatomic) BOOL displayingStandaloneImage; // ivar: _displayingStandaloneImage
@property (readonly, nonatomic) BOOL isSessionStateDataCompressed;
@property (nonatomic) CGFloat lastViewedTime; // ivar: _lastViewedTime
@property (nonatomic) NSInteger orderIndex; // ivar: _orderIndex
@property (nonatomic) NSInteger owningBrowserWindowDatabaseID; // ivar: _owningBrowserWindowDatabaseID
@property (copy, nonatomic) NSString *owningBrowserWindowUUIDString; // ivar: _owningBrowserWindowUUIDString
@property (nonatomic) BOOL privateBrowsing; // ivar: _privateBrowsing
@property (nonatomic) NSInteger readerViewTopScrollOffset; // ivar: _readerViewTopScrollOffset
@property (nonatomic) int readingListBookmarkID; // ivar: _readingListBookmarkID
@property (retain, nonatomic) NSData *sessionStateData; // ivar: _sessionStateData
@property (nonatomic) BOOL showingReader; // ivar: _showingReader
@property (nonatomic) BOOL skipSavingSessionState; // ivar: _skipSavingSessionState
@property (nonatomic) BOOL skipUpdate; // ivar: _skipUpdate
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger uncompressedSessionStateDataSize; // ivar: _uncompressedSessionStateDataSize
@property (retain, nonatomic) NSString *url; // ivar: _url
@property (retain, nonatomic) NSString *userVisibleURL; // ivar: _userVisibleURL
@property (nonatomic) BOOL wasOpenedFromLink; // ivar: _wasOpenedFromLink


+(id)uncompressedDataWithRawData:(id)arg0 uncompressedSize:(NSUInteger)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSQLiteRow:(id)arg0 ;
-(id)toDictionary;
-(void)_uncompressSessionStateDataIfNeeded;


@end


#endif