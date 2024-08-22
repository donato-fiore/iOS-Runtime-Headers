// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTOVERLAYTRANSITIONCONTEXT_H
#define CKTRANSCRIPTOVERLAYTRANSITIONCONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKTranscriptOverlayTransitionContext : NSObject

@property (copy, nonatomic) NSString *anchorChatItemGUID; // ivar: _anchorChatItemGUID
@property (nonatomic) BOOL isParentChatControllerShowingBanner; // ivar: _isParentChatControllerShowingBanner
@property (nonatomic) BOOL keyboardWasUpInMainTranscript; // ivar: _keyboardWasUpInMainTranscript
@property (nonatomic) NSInteger navBarContext; // ivar: _navBarContext
@property (nonatomic) BOOL presentWithKeyboard; // ivar: _presentWithKeyboard
@property (retain, nonatomic) NSDictionary *visibleChatItemToFrameMap; // ivar: _visibleChatItemToFrameMap
@property (nonatomic) BOOL wantsModalPresentation; // ivar: _wantsModalPresentation
@property (nonatomic) BOOL wantsUnanimatedPresentation; // ivar: _wantsUnanimatedPresentation


-(id)description;


@end


#endif