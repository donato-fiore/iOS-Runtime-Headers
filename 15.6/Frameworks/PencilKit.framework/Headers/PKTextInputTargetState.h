// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTTARGETSTATE_H
#define PKTEXTINPUTTARGETSTATE_H

@class NSNumber, CHTextInputQueryItem, NSString, NSUUID;
@protocol NSCopying, PKTextInputDebugStateReporting;

#import <Foundation/Foundation.h>

#import "PKTextInputHandwritingShot.h"

@interface PKTextInputTargetState : NSObject <NSCopying, PKTextInputDebugStateReporting>

 {
    NSNumber *_elementRecognitionIdentifier;
    CHTextInputQueryItem *_lastQueryItem;
    PKTextInputHandwritingShot *_handwritingShot;
    NSNumber *_writingSessionIdentifier;
    NSString *_uncommittedPendingText;
    NSString *_activePreviewText;
    NSInteger _sessionCommitLength;
    NSInteger _lastCommittedCharacterLevelPosition;
    NSUUID *_inProgressGestureStrokeUUID;
    CGFloat _inProgressGestureStartTimestamp;
    CGFloat _lastUpdateTimestamp;
    _NSRange _inProgressGestureInitialSelectedRange;
    _NSRange _inProgressGestureSelectionRange;
    _NSRange _inProgressGestureRangeToDelete;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)reportDebugStateDescription:(id)arg0 ;


@end


#endif