// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDSEARCHABLEINDEXITEM_H
#define EDSEARCHABLEINDEXITEM_H

@class CSSearchableItem, NSData, NSDate, NSString;
@protocol EFLoggable, EDIndexableItem, EDIndexableMessage;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexItem : NSObject <EFLoggable, EDIndexableItem>

 {
    CSSearchableItem *_searchableItem;
}


@property (readonly, nonatomic) BOOL alwaysMarkAsIndexed;
@property (retain, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSUInteger estimatedSizeInBytes;
@property (readonly, nonatomic) BOOL fetchBody; // ivar: _fetchBody
@property (nonatomic) BOOL hasCompleteData; // ivar: _hasCompleteData
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL includeEncryptedBody; // ivar: _includeEncryptedBody
@property (nonatomic) NSInteger indexingType; // ivar: _indexingType
@property (nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (readonly, nonatomic) NSUInteger itemInstantiationTime; // ivar: _itemInstantiationTime
@property (readonly, nonatomic) NSObject<EDIndexableMessage> *message; // ivar: _message
@property (readonly, nonatomic) BOOL requiresPreprocessing;
@property (readonly, nonatomic) BOOL shouldExcludeFromIndex;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *underlyingData;


+(NSInteger)indexingPriorityByIndexingType:(NSInteger)arg0 ;
+(id)accountIdentifierForMessage:(id)arg0 ;
+(id)csIdentifierForMailbox:(id)arg0 ;
+(id)domainIdentifierForAccountID:(id)arg0 mailboxPersistentID:(id)arg1 ;
+(id)domainIdentifierForMessage:(id)arg0 ;
+(id)itemWithIdentifier:(id)arg0 message:(id)arg1 bodyData:(id)arg2 fetchBody:(BOOL)arg3 ;
+(id)itemWithMessage:(id)arg0 bodyData:(id)arg1 fetchBody:(BOOL)arg2 ;
+(id)log;
+(void)mailboxIdentifiersForMessage:(id)arg0 result:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)fetchIndexableAttachments;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 message:(id)arg1 bodyData:(id)arg2 fetchBody:(BOOL)arg3 ;
-(id)initWithMessage:(id)arg0 bodyData:(id)arg1 fetchBody:(BOOL)arg2 ;
-(id)searchableItem;
-(void)_addStaticAttributesToAttributeSet:(id)arg0 ;
-(void)addAttachmentAttributesToAttributeSet:(id)arg0 ;
-(void)addFlagsAttributesToAttributeSet:(id)arg0 ;
-(void)addStaticAttributesToAttributeSet:(id)arg0 ;
-(void)addUpdatableAttributesToAttributeSet:(id)arg0 ;
-(void)preprocess;
-(void)setNeedsAllAttributesIndexingType;


@end


#endif