// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABBUFFERQUERY_H
#define ABBUFFERQUERY_H

@class CNManagedConfiguration, NSIndexSet;

#import <Foundation/Foundation.h>

#import "ABSQLPredicate.h"

@interface ABBufferQuery : NSObject

@property (nonatomic) *void addressBook; // ivar: _addressBook
@property (nonatomic) NSInteger contactidentifierAuditMode; // ivar: _contactidentifierAuditMode
@property (nonatomic) BOOL fetchLinkedContacts; // ivar: _fetchLinkedContacts
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (readonly, nonatomic) BOOL needsMultivalueEntryTable; // ivar: _needsMultivalueEntryTable
@property (readonly, nonatomic) BOOL needsMultivalueTable; // ivar: _needsMultivalueTable
@property (readonly, nonatomic) BOOL needsPersonLinkTable; // ivar: _needsPersonLinkTable
@property (readonly, nonatomic) BOOL needsPersonTable; // ivar: _needsPersonTable
@property (retain, nonatomic) ABSQLPredicate *predicate; // ivar: _predicate
@property (nonatomic) *__CFDictionary propertyIndices; // ivar: _propertyIndices
@property (readonly, nonatomic) BOOL requestedHasImageData; // ivar: _requestedHasImageData
@property (readonly, nonatomic) BOOL requestedImageCropRect; // ivar: _requestedImageCropRect
@property (readonly, nonatomic) BOOL requestedImageData; // ivar: _requestedImageData
@property (readonly, nonatomic) BOOL requestedImageFullscreenData; // ivar: _requestedImageFullscreenData
@property (readonly, nonatomic) BOOL requestedImageThumbnail; // ivar: _requestedImageThumbnail
@property (readonly, nonatomic) NSIndexSet *requestedMultivalueIdentifiers; // ivar: _requestedMultivalueIdentifiers
@property (readonly, nonatomic) NSIndexSet *requestedPropertyIdentifiers; // ivar: _requestedPropertyIdentifiers
@property (readonly, nonatomic) BOOL requestedSyncImageData; // ivar: _requestedSyncImageData
@property (readonly, nonatomic) NSIndexSet *scopedStoreIdentifiers; // ivar: _scopedStoreIdentifiers
@property (nonatomic) unsigned int sortOrder; // ivar: _sortOrder
@property (nonatomic) *CPSqliteStatement statement; // ivar: _statement


-(id)initWithAddressBook:(*void)arg0 predicate:(id)arg1 requestedProperties:(struct __CFSet *)arg2 includeLinkedContacts:(BOOL)arg3 sortOrder:(unsigned int)arg4 managedConfiguration:(id)arg5 identifierAuditStlye:(NSInteger)arg6 ;
-(id)scopedStoresForManagedConfiguration:(id)arg0 ;
-(void)_initSetupPropertySet:(struct __CFSet *)arg0 includeLinkedContacts:(BOOL)arg1 ;
-(void)appendBindParameterMarkersToQueryString:(id)arg0 count:(NSUInteger)arg1 ;
-(void)appendCustomPropertySelectsToQueryString:(id)arg0 ;
-(void)appendFromClauseToQueryString:(id)arg0 ;
-(void)appendOrderByClauseToQueryString:(id)arg0 ;
-(void)appendWhereClauseToQueryString:(id)arg0 ;
-(void)bindWhereClause:(id)arg0 ;
-(void)bindWithClause:(id)arg0 ;
-(void)dealloc;
-(void)prependWithClauseToQueryString:(id)arg0 whereClause:(id)arg1 ;


@end


#endif