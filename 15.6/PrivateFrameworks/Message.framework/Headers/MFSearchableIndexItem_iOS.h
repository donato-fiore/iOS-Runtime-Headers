// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFSEARCHABLEINDEXITEM_IOS_H
#define MFSEARCHABLEINDEXITEM_IOS_H

@class EDSearchableIndexItem, NSString;
@protocol EFLoggable;



@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)searchableIndexItemWithIdentifier:(id)arg0 message:(id)arg1 type:(NSInteger)arg2 ;
+(id)searchableIndexItemsFromMessages:(id)arg0 type:(NSInteger)arg1 ;
+(id)suggestionsSearchableItemWithMessage:(id)arg0 ;
-(BOOL)_shouldAutoDownloadAttachment:(id)arg0 ;
-(BOOL)shouldExcludeFromIndex;
-(id)fetchIndexableAttachments;
-(void)addAttachmentAttributesToAttributeSet:(id)arg0 ;
-(void)preprocess;
-(void)setNeedsAllAttributesIndexingType;


@end


#endif