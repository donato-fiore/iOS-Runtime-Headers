// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKINLINEREPLYTRANSITIONCONTEXT_H
#define CKINLINEREPLYTRANSITIONCONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKInlineReplyTransitionContext : NSObject

@property (copy, nonatomic) NSString *anchorChatItemGUID; // ivar: _anchorChatItemGUID
@property (nonatomic) BOOL keyboardWasUpInMainTranscript; // ivar: _keyboardWasUpInMainTranscript
@property (nonatomic) BOOL presentWithKeyboard; // ivar: _presentWithKeyboard
@property (retain, nonatomic) NSDictionary *visibleChatItemToFrameMap; // ivar: _visibleChatItemToFrameMap
@property (nonatomic) BOOL wantsModalPresentation; // ivar: _wantsModalPresentation
@property (nonatomic) BOOL wantsUnanimatedPresentation; // ivar: _wantsUnanimatedPresentation


-(id)description;


@end


#endif