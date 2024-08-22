// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBOOKMARK_H
#define WEBBOOKMARK_H

@class NSString, NSData, NSDate, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WebBookmark : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    BOOL _locallyAdded;
    int _archiveStatus;
    int _webFilterStatus;
    unsigned int _orderIndex;
    NSUInteger _modifiedAttributes;
    BOOL _usedForInMemoryChangeTracking;
}


@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) unsigned int _orderIndex;
@property (retain, nonatomic) NSString *address; // ivar: _url
@property (nonatomic) int archiveStatus;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSDate *dateLastArchived;
@property (retain, nonatomic) NSDate *dateLastFetched;
@property (retain, nonatomic) NSDate *dateLastViewed;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable; // ivar: _deletable
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationForInMemoryChangeTracking;
@property (readonly, nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (retain, nonatomic) NSDictionary *extraAttributes; // ivar: _extraAttributes
@property (nonatomic) BOOL fetchedIconData; // ivar: _fetchedIconData
@property (readonly, nonatomic, getter=isFolder) BOOL folder; // ivar: _folder
@property (nonatomic) BOOL hasFetchedMetadata;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) int identifier; // ivar: _id
@property (readonly, nonatomic, getter=isInserted) BOOL inserted; // ivar: _inserted
@property (readonly, nonatomic) BOOL isReadingListItem;
@property (nonatomic) int lastSelectedChildID; // ivar: _lastSelectedChildID
@property (retain, nonatomic) NSDictionary *localAttributes; // ivar: _localAttributes
@property (retain, nonatomic) NSString *localPreviewText;
@property (nonatomic) BOOL locallyAdded;
@property (readonly, nonatomic) NSUInteger modifiedAttributes;
@property (nonatomic) BOOL needsSyncUpdate; // ivar: _needsSyncUpdate
@property (retain, nonatomic) NSDictionary *nextPageURLs;
@property (readonly, nonatomic) int parentID; // ivar: _parentID
@property (retain, nonatomic) NSString *previewText;
@property (retain, nonatomic) NSString *readingListIconURL;
@property (retain, nonatomic) NSString *readingListIconUUID;
@property (retain, nonatomic) NSString *serverID;
@property (nonatomic) BOOL shouldArchive;
@property (readonly, nonatomic) int specialID; // ivar: _specialID
@property (retain, nonatomic) NSData *syncData;
@property (retain, nonatomic) NSString *syncKey;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable; // ivar: _syncable
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int webFilterStatus;


+(BOOL)supportsSecureCoding;
+(id)_trimmedPreviewText:(id)arg0 ;
+(id)_trimmedTitle:(id)arg0 ;
-(BOOL)_attributesMarkedAsModified:(NSUInteger)arg0 ;
-(BOOL)_usedForInMemoryChangeTracking;
-(BOOL)fullArchiveAvailable;
-(BOOL)isBookmarksBarFolder;
-(BOOL)isBookmarksMenuFolder;
-(BOOL)isBuiltinBookmark;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBookmark:(id)arg0 ;
-(BOOL)isFrequentlyVisitedSitesFolder;
-(BOOL)isReadingListFolder;
-(BOOL)isWebFilterWhiteListFolder;
-(BOOL)shouldReattemptArchiveWithAutomaticArchivingEnabled:(BOOL)arg0 ;
-(NSUInteger)_sizeForFileOrDirectory:(id)arg0 withAttributes:(id)arg1 ;
-(NSUInteger)archiveSize;
-(NSUInteger)hash;
-(id)_initWithSqliteRow:(struct sqlite3_stmt *)arg0 ;
-(id)_initWithSqliteRow:(struct sqlite3_stmt *)arg0 hasIcon:(BOOL)arg1 ;
-(id)_readingListPropertyNamed:(id)arg0 ;
-(id)_stringForReadingListArchiveStatus:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
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
-(id)localizedTitle;
-(id)offlineArchiveDirectoryPath;
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
-(void)cleanupRedundantPreviewText;
-(void)clearArchive;
-(void)clearArchiveSynchronously;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif