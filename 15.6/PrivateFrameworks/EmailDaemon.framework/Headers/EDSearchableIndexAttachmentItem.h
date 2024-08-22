// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDSEARCHABLEINDEXATTACHMENTITEM_H
#define EDSEARCHABLEINDEXATTACHMENTITEM_H

@class CSSearchableItem, NSString, EFPromise, NSDate, NSData;
@protocol EFLoggable, EDIndexableItem;

#import <Foundation/Foundation.h>

#import "EDSearchableIndexAttachmentItemMetadatum.h"

@interface EDSearchableIndexAttachmentItem : NSObject <EFLoggable, EDIndexableItem>

 {
    CSSearchableItem *_searchableItem;
}


@property (readonly, nonatomic) BOOL alwaysMarkAsIndexed;
@property (copy, nonatomic) NSString *attachmentPersistentID; // ivar: _attachmentPersistentID
@property (retain, nonatomic) EFPromise *attributeSetForFilePromise; // ivar: _attributeSetForFilePromise
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSUInteger estimatedSizeInBytes;
@property (readonly, nonatomic) BOOL hasCompleteData;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger indexingType; // ivar: _indexingType
@property (readonly, nonatomic) NSUInteger itemInstantiationTime; // ivar: _itemInstantiationTime
@property (copy, nonatomic) NSString *messagePersistentID; // ivar: _messagePersistentID
@property (retain, nonatomic) EDSearchableIndexAttachmentItemMetadatum *metadatum; // ivar: _metadatum
@property (nonatomic) BOOL requiresPreprocessing; // ivar: _requiresPreprocessing
@property (nonatomic) CGFloat searchableItemProcessingDelay; // ivar: _searchableItemProcessingDelay
@property (readonly, nonatomic) BOOL shouldExcludeFromIndex;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *underlyingData; // ivar: _underlyingData


+(id)attachmentPersistentIDFromItemIdentifier:(id)arg0 ;
+(id)identifierForAttachmentPersistentID:(id)arg0 ;
+(id)log;
-(NSInteger)compare:(id)arg0 ;
-(id)fetchIndexableAttachments;
-(id)initWithAttachmentPersistentID:(id)arg0 messagePersistentID:(id)arg1 metadatum:(id)arg2 ;
-(id)searchableItem;
-(void)preprocess;
-(void)setNeedsAllAttributesIndexingType;


@end


#endif