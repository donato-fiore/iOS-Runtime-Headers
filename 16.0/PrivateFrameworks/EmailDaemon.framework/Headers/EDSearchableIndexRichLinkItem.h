// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSEARCHABLEINDEXRICHLINKITEM_H
#define EDSEARCHABLEINDEXRICHLINKITEM_H

@class CSSearchableItem, NSDate, NSString, NSData;
@protocol EFLoggable, EDIndexableItem;

#import <Foundation/Foundation.h>

#import "EDSearchableIndexRichLinkItemMetadatum.h"

@interface EDSearchableIndexRichLinkItem : NSObject <EFLoggable, EDIndexableItem>

 {
    CSSearchableItem *_searchableItem;
}


@property (readonly, nonatomic) BOOL alwaysMarkAsIndexed;
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
@property (retain, nonatomic) EDSearchableIndexRichLinkItemMetadatum *metadatum; // ivar: _metadatum
@property (nonatomic) BOOL requiresPreprocessing; // ivar: _requiresPreprocessing
@property (readonly, copy, nonatomic) NSString *richLinkItemIdentifier; // ivar: _richLinkItemIdentifier
@property (copy, nonatomic) NSString *richLinkPersistentID; // ivar: _richLinkPersistentID
@property (readonly, nonatomic) BOOL shouldExcludeFromIndex;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *underlyingData; // ivar: _underlyingData


+(id)completeSearchableIndexRichLinkItemIdentifierFromID:(id)arg0 ;
+(id)log;
+(id)messageIDandRichLinkIDFromRichLinkIdentifier:(id)arg0 ;
+(id)richLinkItemIdentifierFromSearchableItemIdentifier:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)fetchIndexableAttachments;
-(id)initWithRichLinkItemIdentifier:(id)arg0 messagePersistentID:(id)arg1 metadatum:(id)arg2 ;
-(id)searchableItem;
-(void)preprocess;
-(void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
-(void)setNeedsAllAttributesIndexingType;


@end


#endif