// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTMODEL_H
#define CKTRANSCRIPTMODEL_H

@class NSArray, NSDiffableDataSourceSnapshot, NSDictionary;
@protocol CKTranscriptModelDelegate;

#import <Foundation/Foundation.h>

#import "CKConversation.h"

@interface CKTranscriptModel : NSObject

@property (retain, nonatomic) NSArray *chatItems; // ivar: _chatItems
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (weak, nonatomic) NSObject<CKTranscriptModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSDictionary *supplementaryKindToChatItemMap; // ivar: _supplementaryKindToChatItemMap


+(id)transcriptSectionIdentifier;
-(id)chatItemWithIMChatItem:(id)arg0 traitCollection:(id)arg1 ;
-(id)chatItemsWithIMChatItems:(id)arg0 ;
-(id)initWithConversation:(id)arg0 delegate:(id)arg1 ;
-(void)reload;


@end


#endif