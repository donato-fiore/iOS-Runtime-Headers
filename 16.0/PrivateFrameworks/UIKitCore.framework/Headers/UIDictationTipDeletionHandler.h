// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONTIPDELETIONHANDLER_H
#define UIDICTATIONTIPDELETIONHANDLER_H

@class NSMutableString, NSString;
@protocol UIDictationTipRecordingProtocol, UIDictationTipHandlerDelegate;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"

@interface UIDictationTipDeletionHandler : NSObject <UIDictationTipRecordingProtocol>



@property (retain, nonatomic) NSMutableString *cachedDeletedText; // ivar: _cachedDeletedText
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDictationTipHandlerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger deletionEventCount; // ivar: _deletionEventCount
@property (retain, nonatomic) NSMutableString *deletionText; // ivar: _deletionText
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDelayedAction *finalizeAction; // ivar: _finalizeAction
@property (readonly) NSUInteger hash;
@property (nonatomic) _NSRange lastSelectedDeletionRange; // ivar: _lastSelectedDeletionRange
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textRecorderStatus; // ivar: _textRecorderStatus


-(NSInteger)currentDeletionEventCount;
-(id)initWithDelegate:(id)arg0 ;
-(void)addDeletionEventCount:(id)arg0 deletedTextRange:(struct _NSRange )arg1 ;
-(void)finalizeRecordedText;
-(void)recordDictationTipDeletionText:(id)arg0 ;
-(void)recordDictationTipText:(id)arg0 ;
-(void)resetHandler;
-(void)resetRecorder;
-(void)setlastDeletionRange:(struct _NSRange )arg0 ;
-(void)startRecodingDeletionText:(id)arg0 ;
-(void)startRecodingText:(id)arg0 ;


@end


#endif