// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDSHAREDWITHYOUMETADATAMANAGER_H
#define IMDSHAREDWITHYOUMETADATAMANAGER_H


#import <Foundation/Foundation.h>


@interface IMDSharedWithYouMetadataManager : NSObject



+(Class)LPSharedObjectMetadataClass;
+(Class)LPSpecializationMetadataClass;
+(id)Sha256ForData:(id)arg0 withSalt:(id)arg1 ;
+(id)collaborationMetadataKey;
+(id)tuManagerQueue;
-(BOOL)_isAttachmentType:(id)arg0 ;
-(BOOL)_isLNKTypeMessage:(id)arg0 ;
-(BOOL)chatDictionary:(id)arg0 matchesFaceTimeConversation:(id)arg1 ;
-(id)_ckBundleIDsKey;
-(id)_collaborationIdentifierKey;
-(id)_highlightedContentServerDateKey;
-(id)_indexTypeCustomKey;
-(id)_lpLinkMetadataForItem:(id)arg0 attachmentPaths:(id)arg1 originalURL:(id)arg2 ;
-(id)_lpTitleCustomKey;
-(id)_pluginPayloadAttachmentPathsForItem:(id)arg0 ;
-(id)_syndicationContentTypeKey;
-(id)_uniqueIdentifierForResourceURL:(id)arg0 ;
-(id)_updateAttributesWithCollaborationMetadata:(id)arg0 withItem:(id)arg1 chat:(id)arg2 shouldAddSharedWithYouMetadata:(BOOL)arg3 ;
-(id)highlightDictionaryFromAttributes:(id)arg0 withItem:(id)arg1 chat:(id)arg2 ;
-(id)titleFromLPLinkMetadata:(id)arg0 ;
-(id)updateAttributesWithSharedWithYouMetadata:(id)arg0 withItem:(id)arg1 chat:(id)arg2 ;
-(void)updateConversationManagerWithItem:(id)arg0 chat:(id)arg1 attributes:(id)arg2 ;


@end


#endif