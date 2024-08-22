// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMGESTUREWORKSPACETRANSACTION_H
#define SBSYSTEMGESTUREWORKSPACETRANSACTION_H

@class NSString, UIGestureRecognizer;


#import "SBMainWorkspaceTransaction.h"

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction {
    NSString *_suppressionReason;
}


@property (readonly, nonatomic) NSInteger completionType; // ivar: _completionType
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer


-(BOOL)shouldSuppressMedusaKeyboardDuringGesture;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_begin;
-(void)_beginAnimation;
-(void)_didComplete;
-(void)_finishWithCompletionType:(NSInteger)arg0 ;
-(void)_setupAnimation;
-(void)finishWithCompletionType:(NSInteger)arg0 ;
-(void)systemGestureStateChanged:(id)arg0 ;


@end


#endif