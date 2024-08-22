// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCITEMID_H
#define BRCITEMID_H

@class NSString;
@protocol NSCopying, NSSecureCoding, PQLValuable;

#import <Foundation/Foundation.h>

#import "BRCALRowID.h"
#import "BRCZoneRowID.h"

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable>

 {
    BRCALRowID *_appLibraryRowID;
    BRCZoneRowID *_zoneRowID;
    unsigned char _kind;
    unsigned char _uuid;
}


@property (readonly, nonatomic) char * UTF8String;
@property (readonly, nonatomic) BRCALRowID *appLibraryRowID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugItemIDString;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDocumentsFolder;
@property (readonly, nonatomic) BOOL isNonDesktopRoot;
@property (readonly, nonatomic) BOOL isSharedZoneRoot;
@property (readonly, nonatomic) NSString *itemIDString;
@property (readonly, nonatomic) BRCZoneRowID *sharedZoneRowID;
@property (readonly) Class superclass;


+(BOOL)isDocumentsItemIDWithSQLiteValue:(struct sqlite3_value *)arg0 ;
+(BOOL)isRootItemIDWithSQLiteValue:(struct sqlite3_value *)arg0 ;
+(BOOL)isSharedZoneRootItemIDWithSQLiteValue:(struct sqlite3_value *)arg0 ;
+(BOOL)migrateItemIDsToVersion11WithDB:(id)arg0 serverTruth:(BOOL)arg1 ;
+(BOOL)migrateItemIDsToVersion5WithDB:(id)arg0 serverTruth:(BOOL)arg1 ;
+(BOOL)migrateItemIDsToVersion8WithDB:(id)arg0 serverTruth:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)documentsItemIDWithAppLibraryRowID:(id)arg0 ;
+(id)newFromSqliteStatement:(struct sqlite3_stmt *)arg0 atIndex:(int)arg1 ;
+(id)newFromSqliteValue:(struct sqlite3_value *)arg0 ;
+(id)parseMangledItemIDString:(id)arg0 mangledID:(*id)arg1 etag:(*id)arg2 session:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemID:(id)arg0 ;
-(id)_directoryRecordNameWithSession:(id)arg0 ;
-(id)_initAsLibraryRootWithAppLibraryRowID:(id)arg0 ;
-(id)_initAsZoneRootWithZoneRowID:(id)arg0 ;
-(id)contentsRecordIDInZoneID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)derivedAliasItemIDWithOwnerName:(id)arg0 ;
-(id)directoryReferenceInZone:(id)arg0 action:(NSUInteger)arg1 ;
-(id)directoryStructureRecordIDInZone:(id)arg0 ;
-(id)documentStructureRecordIDInZoneID:(id)arg0 ;
-(id)init;
-(id)initAsDocumentsWithAppLibraryRowID:(id)arg0 ;
-(id)initWithAliasUUID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemID:(id)arg0 ;
-(id)initWithRootObject:(struct RootItemObject *)arg0 ;
-(id)initWithString:(id)arg0 libraryRowID:(id)arg1 sharedZoneRowID:(id)arg2 ;
-(id)initWithUUID:(char *)arg0 ;
-(id)initWithUUIDString:(id)arg0 ;
-(id)itemUUIDString;
-(id)pcsChainDocumentStructureReferenceInZoneID:(id)arg0 ;
-(id)pcsChainParentReferenceInZone:(id)arg0 ;
-(id)sideCarRecordIDWithZone:(id)arg0 ;
-(id)sideCarRecordNameWithZone:(id)arg0 ;
-(id)structureRecordIDForItemType:(char)arg0 zone:(id)arg1 aliasTargetZoneIsShared:(BOOL)arg2 ;
-(id)structureRecordPrefixForItemType:(char)arg0 targetZoneShared:(BOOL)arg1 ;
-(id)validatingDirectoryReferenceInZone:(id)arg0 ;
-(id)zoneUniqueItemIDStringWithSession:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;


@end


#endif