// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXCALLDIRECTORYSTORE_H
#define CXCALLDIRECTORYSTORE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "CXDatabase.h"

@interface CXCallDirectoryStore : NSObject

@property (copy, nonatomic) NSString *addBlockingEntriesInsertPhoneNumberBlockingEntrySQL; // ivar: _addBlockingEntriesInsertPhoneNumberBlockingEntrySQL
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertLabelsSQL; // ivar: _addIdentificationEntriesInsertLabelsSQL
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL; // ivar: _addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL
@property (copy, nonatomic) NSString *addPhoneNumbersSQL; // ivar: _addPhoneNumbersSQL
@property (readonly, nonatomic, getter=isCorrupt) BOOL corrupt;
@property (retain, nonatomic) CXDatabase *database; // ivar: _database
@property (nonatomic) NSInteger lastAddBlockingEntriesCount; // ivar: _lastAddBlockingEntriesCount
@property (nonatomic) NSInteger lastAddIdentificationEntriesCount; // ivar: _lastAddIdentificationEntriesCount
@property (nonatomic) NSInteger lastAddPhoneNumbersCount; // ivar: _lastAddPhoneNumbersCount
@property (nonatomic) NSInteger lastRemoveBlockingEntriesCount; // ivar: _lastRemoveBlockingEntriesCount
@property (nonatomic) NSInteger lastRemoveIdentificationEntriesCount; // ivar: _lastRemoveIdentificationEntriesCount
@property (copy, nonatomic) NSString *removeBlockingEntriesSQL; // ivar: _removeBlockingEntriesSQL
@property (copy, nonatomic) NSString *removeIdentificationEntriesSQL; // ivar: _removeIdentificationEntriesSQL
@property (readonly, nonatomic) NSInteger schemaVersion;
@property (nonatomic, getter=isTemporary) BOOL temporary; // ivar: _temporary
@property (readonly, nonatomic) NSURL *url;


+(BOOL)initializeDatabaseIfNecessaryAtURL:(id)arg0 usingTemplateAtURL:(id)arg1 error:(*id)arg2 ;
+(id)databaseURLUsingTemporaryDirectory:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_addBlockingEntriesWithData:(id)arg0 startIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 extensionID:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)_addIdentificationEntriesWithData:(id)arg0 startIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 extensionID:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)_addPhoneNumbersWithEntryData:(id)arg0 startIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_containsBlockingEntryWithSQL:(id)arg0 bindings:(id)arg1 error:(*id)arg2 ;
// -(BOOL)_parseFirstIdentificationEntriesForSQL:(id)arg0 bindings:(id)arg1 handler:(id)arg2 error:(unk)arg3  ;
// -(BOOL)_parseIdentificationEntriesForSQL:(id)arg0 bindings:(id)arg1 handler:(id)arg2 error:(unk)arg3  ;
-(BOOL)_removeBlockingEntriesWithData:(id)arg0 startIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 extensionID:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)_removeIdentificationEntriesWithData:(id)arg0 startIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 extensionID:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)_removeUnreferencedLabelsWithError:(*id)arg0 ;
-(BOOL)_removeUnreferencedPhoneNumbersWithError:(*id)arg0 ;
-(BOOL)addBlockingEntriesWithData:(id)arg0 extensionID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)addBlockingEntryWithPhoneNumber:(NSInteger)arg0 extensionID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)addIdentificationEntriesWithData:(id)arg0 extensionID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)addIdentificationEntryWithPhoneNumber:(NSInteger)arg0 labelID:(NSInteger)arg1 extensionID:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumber:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsBlockingEntryForEnabledExtensionWithPhoneNumberInArray:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsBlockingEntryWithPhoneNumber:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsBlockingEntryWithPhoneNumberInArray:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsExtensionWithIdentifier:(id)arg0 error:(*id)arg1 ;
// -(BOOL)performTransactionWithBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)removeBlockingEntriesForExtensionWithID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeBlockingEntriesWithData:(id)arg0 extensionID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)removeExtensionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeIdentificationEntriesForExtensionWithID:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeIdentificationEntriesWithData:(id)arg0 extensionID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)removeUnreferencedRecordsWithError:(*id)arg0 ;
-(BOOL)setPrioritizedExtensionIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)setState:(NSInteger)arg0 forExtensionWithID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setState:(NSInteger)arg0 forExtensionWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)setStateForAllExtensions:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setStateLastModifiedDate:(id)arg0 forExtensionWithID:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)vacuumWithError:(*id)arg0 ;
-(NSInteger)_findOrCreateIDForPhoneNumber:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)addExtensionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(NSInteger)addExtensionWithIdentifier:(id)arg0 priority:(NSInteger)arg1 error:(*id)arg2 ;
-(NSInteger)addLabel:(id)arg0 error:(*id)arg1 ;
-(NSInteger)idForExtensionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(NSInteger)idForLabel:(id)arg0 error:(*id)arg1 ;
-(NSInteger)idForPhoneNumber:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)schemaVersionWithError:(*id)arg0 ;
-(id)_firstIdentificationEntriesForSQL:(id)arg0 bindings:(id)arg1 error:(*id)arg2 ;
-(id)_firstIdentificationEntryForSQL:(id)arg0 bindings:(id)arg1 error:(*id)arg2 ;
-(id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg0 withPriorityOffset:(NSInteger)arg1 ;
-(id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg0 defaultValue:(id)arg1 numberOfPairs:(NSUInteger)arg2 ;
-(id)_sqlStringListPlaceholderStringWithNumberOfEntries:(NSInteger)arg0 ;
-(id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(NSInteger)arg0 entryString:(id)arg1 ;
-(id)_storeIdentificationEntryWithExtensionBundleID:(id)arg0 localizedLabel:(id)arg1 ;
-(id)description;
-(id)extensionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg0 error:(*id)arg1 ;
-(id)firstIdentificationEntriesForPhoneNumbers:(id)arg0 error:(*id)arg1 ;
-(id)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg0 error:(*id)arg1 ;
-(id)firstIdentificationEntryForPhoneNumber:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initForReadingAndWritingWithError:(*id)arg0 ;
-(id)initForReadingWithError:(*id)arg0 ;
-(id)initReadOnly:(BOOL)arg0 temporary:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithTemplateURL:(id)arg0 readOnly:(BOOL)arg1 temporary:(BOOL)arg2 error:(*id)arg3 ;
-(id)prioritizedExtensionIdentifiersWithError:(*id)arg0 ;
-(id)prioritizedExtensionsWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif