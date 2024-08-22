// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPACKAGE_H
#define CKPACKAGE_H

@class NSString, NSData, NSArray;
@protocol NSSecureCoding, CKRecordValue;

#import <Foundation/Foundation.h>

#import "CKRecord.h"
#import "CKSQLite.h"

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue>



@property (copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (copy, nonatomic) NSData *archiverInfo; // ivar: _archiverInfo
@property (copy, nonatomic) NSArray *assets; // ivar: _assets
@property (copy, nonatomic) NSString *databaseBasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloaded; // ivar: _downloaded
@property (nonatomic) BOOL hasSize; // ivar: _hasSize
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger nextItemIndex; // ivar: _nextItemIndex
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (nonatomic) NSInteger packageID; // ivar: _packageID
@property (weak, nonatomic) CKRecord *record; // ivar: _record
@property (copy, nonatomic) NSString *recordKey; // ivar: _recordKey
@property (nonatomic) *_OpaquePCSShareProtection recordPCS; // ivar: _recordPCS
@property (copy, nonatomic) NSString *rootDatabasePath; // ivar: _rootDatabasePath
@property (nonatomic) BOOL shouldReadRawEncryptedData; // ivar: _shouldReadRawEncryptedData
@property (copy, nonatomic) NSData *signature;
@property (nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) CKSQLite *sqlite; // ivar: _sqlite
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger storageGroupingPolicy; // ivar: _storageGroupingPolicy
@property (readonly) Class superclass;
@property (nonatomic) NSInteger uploadRank; // ivar: _uploadRank
@property (nonatomic) BOOL uploaded; // ivar: _uploaded
@property (nonatomic) BOOL wasCached; // ivar: _wasCached


+(BOOL)supportsSecureCoding;
+(id)clientPackageDatabaseDirectory;
+(id)packageInClientWithBasePath:(id)arg0 error:(*id)arg1 ;
+(id)packageInDaemonWithBasePath:(id)arg0 error:(*id)arg1 ;
+(id)packageProcessBasePath;
+(id)packageWithError:(*id)arg0 ;
+(id)packageWithPackage:(id)arg0 error:(*id)arg1 ;
+(id)stagingPathSuffixForCloudKitCachesDirectoryWithBundleIdentifier:(id)arg0 ;
+(void)destroyClientPackageWithDatabaseBasePath:(id)arg0 UUID:(id)arg1 ;
+(void)gcPackagesInDirectory:(id)arg0 dbInUseBlock:(id)arg1 ;
-(BOOL)addItem:(id)arg0 ;
-(BOOL)addSection:(id)arg0 ;
-(BOOL)claimOwnershipWithError:(*id)arg0 ;
-(BOOL)handleChangeStateAction:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)movePackagesDatabaseInDirection:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)prepareDBWithError:(*id)arg0 ;
-(BOOL)removeDBAndDeleteFilesWithError:(*id)arg0 ;
-(BOOL)updateItemAtIndex:(NSInteger)arg0 withFileURL:(id)arg1 ;
-(BOOL)updateItemAtIndex:(NSInteger)arg0 withSignature:(id)arg1 size:(NSUInteger)arg2 itemID:(NSUInteger)arg3 sectionIndex:(NSUInteger)arg4 ;
-(BOOL)updateItemsAtIndexes:(id)arg0 fileURLs:(id)arg1 ;
-(CGFloat)earliestUploadReceiptExpiration;
-(NSUInteger)itemCount;
-(NSUInteger)itemCountWithError:(*id)arg0 ;
-(NSUInteger)sectionCount;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_initWithBasePath:(id)arg0 UUID:(id)arg1 ;
-(id)_itemOrNilAtIndex:(NSUInteger)arg0 ;
-(id)_itemWithColumnsByName:(id)arg0 ;
-(id)_packageDatabasePath;
-(id)_packageDatabasePathWithState:(NSInteger)arg0 ;
-(id)clonedPackageInDaemonWithBasePath:(id)arg0 filesDuplicatedIntoDirectory:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initUnreachablePackageWithUUID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)itemEnumerator;
-(id)itemEnumeratorForSectionAtIndex:(NSUInteger)arg0 ;
-(id)performTransactionBlock:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(id)testAddSectionConstraintViolation:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleChangeStateAction:(NSInteger)arg0 ;
-(void)releaseDB;
-(void)releaseDBWithRemove:(BOOL)arg0 ;
-(void)removeDB;


@end


#endif