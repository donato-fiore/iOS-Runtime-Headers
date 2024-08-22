// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTAPBACKSENDER_H
#define IMTAPBACKSENDER_H

@class NSAttributedString, NSString, NSDictionary, IMTapback;

#import <Foundation/Foundation.h>

#import "IMChat.h"

@interface IMTapbackSender : NSObject

@property (readonly, nonatomic) NSAttributedString *attributedContentString; // ivar: _attributedContentString
@property (readonly, nonatomic) NSString *backwardCompatibilityString; // ivar: _backwardCompatibilityString
@property (readonly, nonatomic) IMChat *chat; // ivar: _chat
@property (readonly, nonatomic) NSAttributedString *messageContent; // ivar: _messageContent
@property (readonly, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (readonly, nonatomic) _NSRange messagePartRange; // ivar: _messagePartRange
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo; // ivar: _messageSummaryInfo
@property (readonly, nonatomic) IMTapback *tapback; // ivar: _tapback
@property (readonly, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier


-(id)initWithTapback:(id)arg0 chat:(id)arg1 messageGUID:(id)arg2 messagePartRange:(struct _NSRange )arg3 messageSummaryInfo:(id)arg4 threadIdentifier:(id)arg5 ;
-(id)initWithTapback:(id)arg0 chat:(id)arg1 messagePartChatItem:(id)arg2 ;
-(void)send;


@end


#endif