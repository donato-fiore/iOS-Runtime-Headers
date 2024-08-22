// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBBOOKMARK_H
#define WEBBOOKMARK_H

@class NSString, NSData, NSDate, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WBBookmarkSyncData.h"

@interface WebBookmark : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    WBBookmarkSyncData *_syncMetadata;
    BOOL _addedLocally;
    NSInteger _archiveStatus;
    NSInteger _webFilterStatus;
    unsigned int _orderIndex;
    NSUInteger _modifiedAttributes;
    BOOL _usedForInMemoryChangeTracking;
}


@property (readonly, copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) unsigned int _orderIndex;
@property (nonatomic, getter=isAddedLocally) BOOL addedLocally;
@property (copy, nonatomic) NSString *address; // ivar: _url
@property (readonly, nonatomic) NSUInteger archiveSize;
@property (nonatomic) NSInteger archiveStatus;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSDate *dateLastArchived;
@property (retain, nonatomic) NSDate *dateLastFetched;
@property (retain, nonatomic) NSDate *dateLastViewed;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable; // ivar: _deletable
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationForInMemoryChangeTracking;
@property (readonly, nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (copy, nonatomic) NSDictionary *extraAttributes; // ivar: _extraAttributes
@property (nonatomic) BOOL fetchedIconData; // ivar: _fetchedIconData
@property (readonly, nonatomic, getter=isFolder) BOOL folder; // ivar: _folder
@property (readonly, nonatomic, getter=isFullArchiveAvailable) BOOL fullArchiveAvailable;
@property (nonatomic) BOOL hasFetchedMetadata;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) int identifier; // ivar: _id
@property (readonly, nonatomic, getter=isInserted) BOOL inserted; // ivar: _inserted
@property (readonly, nonatomic) BOOL isBookmarksBarFolder;
@property (readonly, nonatomic) BOOL isBookmarksMenuFolder;
@property (readonly, nonatomic) BOOL isBuiltinBookmark;
@property (readonly, nonatomic) BOOL isFrequentlyVisitedSitesFolder;
@property (readonly, nonatomic) BOOL isReadingListFolder;
@property (readonly, nonatomic) BOOL isReadingListItem;
@property (readonly, nonatomic) BOOL isWebFilterWhiteListFolder;
@property (nonatomic) int lastSelectedChildID; // ivar: _lastSelectedChildID
@property (copy, nonatomic) NSDictionary *localAttributes; // ivar: _localAttributes
@property (copy, nonatomic) NSString *localPreviewText;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSUInteger modifiedAttributes;
@property (nonatomic) BOOL needsSyncUpdate; // ivar: _needsSyncUpdate
@property (copy, nonatomic) NSDictionary *nextPageURLs;
@property (readonly, copy, nonatomic) NSString *offlineArchiveDirectoryPath;
@property (readonly, nonatomic) int parentID; // ivar: _parentID
@property (copy, nonatomic) NSString *previewText;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (copy, nonatomic) NSString *readingListIconURL;
@property (copy, nonatomic) NSString *readingListIconUUID;
@property (copy, nonatomic) NSString *serverID;
@property (nonatomic) BOOL shouldArchive;
@property (readonly, nonatomic) int specialID; // ivar: _specialID
@property (copy, nonatomic) NSData *syncData;
@property (copy, nonatomic) NSString *syncKey;
@property (retain, nonatomic) WBBookmarkSyncData *syncMetadata;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable; // ivar: _syncable
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger webFilterStatus;


+(BOOL)supportsSecureCoding;
+(id)_trimmedPreviewText:(id)arg0 ;
+(id)_trimmedTitle:(id)arg0 ;
-(BOOL)_attributesMarkedAsModified:(NSUInteger)arg0 ;
-(BOOL)_usedForInMemoryChangeTracking;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBookmark:(id)arg0 ;
-(BOOL)shouldReattemptArchiveWithAutomaticArchivingEnabled:(BOOL)arg0 ;
-(NSUInteger)_sizeForFileOrDirectory:(id)arg0 withAttributes:(id)arg1 ;
-(NSUInteger)hash;
-(id)_initWithSqliteRow:(struct sqlite3_stmt *)arg0 ;
-(id)_initWithSqliteRow:(struct sqlite3_stmt *)arg0 hasIcon:(BOOL)arg1 ;
-(id)_readingListPropertyNamed:(id)arg0 ;
-(id)_stringForReadingListArchiveStatus:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionPreservingPrivacy:(BOOL)arg0 ;
-(id)init;
-(id)initBuiltinBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initBuiltinDeviceBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initCarrierBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initFolderWithParentID:(int)arg0 ;
-(id)initFrequentlyVisitedSiteWithWebBookmark:(id)arg0 title:(id)arg1 ;
-(id)initReadingListBookmarkWithTitle:(id)arg0 address:(id)arg1 previewText:(id)arg2 ;
-(id)initWhiteListBookmarkWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentationForInMemoryChangeTracking:(id)arg0 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 ;
-(id)initWithTitle:(id)arg0 address:(id)arg1 parentID:(int)arg2 ;
-(id)shortTypeDescription;
-(id)webarchivePathForNextPageURL:(id)arg0 ;
-(id)webarchivePathInReaderForm:(BOOL)arg0 fileExists:(*BOOL)arg1 ;
-(void)_markAttributesAsModified:(NSUInteger)arg0 ;
-(void)_markSpecial:(int)arg0 ;
-(void)_modifyExtraReadingListAttributes:(id)arg0 ;
-(void)_modifyLocalReadingListAttributes:(id)arg0 ;
-(void)_removeDirectoryAtPath:(id)arg0 ;
-(void)_setID:(int)arg0 ;
-(void)_setOrderIndex:(unsigned int)arg0 ;
-(void)_setUsedForInMemoryChangeTracking:(BOOL)arg0 ;
-(void)cleanUpRedundantPreviewText;
-(void)clearArchive;
-(void)clearArchiveSynchronously;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif