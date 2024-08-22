// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABBUFFERQUERYCURSOR_H
#define ABBUFFERQUERYCURSOR_H

@class NSMutableSet, NSData, CNManagedConfiguration, NSMutableDictionary, NSMutableData;

#import <Foundation/Foundation.h>

#import "ABBufferQuery.h"

@interface ABBufferQueryCursor : NSObject

@property (nonatomic) NSUInteger blobBytesWritten; // ivar: _blobBytesWritten
@property (nonatomic) NSUInteger blobLength; // ivar: _blobLength
@property (retain, nonatomic) NSMutableSet *contactIdentifiers; // ivar: _contactIdentifiers
@property (nonatomic) int contactLinkUUIDColumn; // ivar: _contactLinkUUIDColumn
@property (nonatomic) int contactPreferredForImageColumn; // ivar: _contactPreferredForImageColumn
@property (nonatomic) NSUInteger countOfContactsInBuffer; // ivar: _countOfContactsInBuffer
@property (nonatomic) NSInteger currentMultivalue; // ivar: _currentMultivalue
@property (nonatomic) int currentMultivalueIdentifier; // ivar: _currentMultivalueIdentifier
@property (nonatomic) int currentPropertyID; // ivar: _currentPropertyID
@property (nonatomic) int currentRecordID; // ivar: _currentRecordID
@property (retain, nonatomic) NSData *currentRecordIndividualUniqueIDAuditData; // ivar: _currentRecordIndividualUniqueIDAuditData
@property (retain, nonatomic) NSData *currentRecordLinkedUniqueIDAuditData; // ivar: _currentRecordLinkedUniqueIDAuditData
@property (nonatomic) BOOL hasFoundAnyImageDataForCurrentContact; // ivar: _hasFoundAnyImageDataForCurrentContact
@property (nonatomic) *sqlite3_blob incompleteBlob; // ivar: _incompleteBlob
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (retain, nonatomic) NSMutableDictionary *matchInfo; // ivar: _matchInfo
@property (nonatomic) NSUInteger maxBufferSize; // ivar: _maxBufferSize
@property (nonatomic) NSUInteger maxContactsPerBatch; // ivar: _maxContactsPerBatch
@property (nonatomic) int multivalueEntryKeyColumn; // ivar: _multivalueEntryKeyColumn
@property (nonatomic) int multivalueEntryValueColumn; // ivar: _multivalueEntryValueColumn
@property (nonatomic) int multivalueIdentifierColumn; // ivar: _multivalueIdentifierColumn
@property (nonatomic) int multivalueLabelColumn; // ivar: _multivalueLabelColumn
@property (nonatomic) int multivaluePropertyIDColumn; // ivar: _multivaluePropertyIDColumn
@property (nonatomic) int multivalueUUIDColumn; // ivar: _multivalueUUIDColumn
@property (nonatomic) int multivalueValueColumn; // ivar: _multivalueValueColumn
@property (retain, nonatomic) NSMutableData *mutableData; // ivar: _mutableData
@property (nonatomic) int personLinkColumn; // ivar: _personLinkColumn
@property (readonly, nonatomic) ABBufferQuery *query; // ivar: _query
@property (nonatomic) NSInteger resumeToken; // ivar: _resumeToken


-(id)initWithAddressBook:(*void)arg0 predicate:(id)arg1 propertyIdentifierSet:(struct __CFSet *)arg2 includeLinkedContacts:(BOOL)arg3 sortOrder:(unsigned int)arg4 suggestedContactsPerBatch:(NSUInteger)arg5 managedConfiguration:(id)arg6 identifierAuditMode:(NSInteger)arg7 ;
-(id)initWithQuery:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)fetchNextBatchWithReply:(id)arg0 ;


@end


#endif