// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWALLETPREARMRECOGNIZER_H
#define SBWALLETPREARMRECOGNIZER_H

@class BSAbsoluteMachTimer;
@protocol SBWalletPrearmRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface SBWalletPrearmRecognizer : NSObject {
    id<SBWalletPrearmRecognizerDelegate> *_delegate;
    CGFloat _timeout;
    BSAbsoluteMachTimer *_timer;
    BOOL _invalidated;
}




-(CGFloat)_computeDoubleTapTimeout;
-(id)initWithDelegate:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateForFailureReason:(NSUInteger)arg0 ;
-(void)_invalidateForSuccess;
-(void)dealloc;
-(void)invalidate;
-(void)menuButtonDoublePress;
-(void)menuButtonSinglePress;
-(void)startRecognizing;


@end


#endif