// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTEXTINPUTPROTOSETTINGS_H
#define CHTEXTINPUTPROTOSETTINGS_H


#import <Foundation/Foundation.h>


@interface CHTextInputProtoSettings : NSObject

@property (readonly, nonatomic) CGFloat autoLineBreakAreaWidthFactor; // ivar: _autoLineBreakAreaWidthFactor
@property (readonly, nonatomic) CGFloat autoLineBreakDualBreakVerticalDistance; // ivar: _autoLineBreakDualBreakVerticalDistance
@property (readonly, nonatomic) BOOL autoLineBreakEnabled; // ivar: _autoLineBreakEnabled
@property (readonly, nonatomic) CGFloat autoLineBreakMinVerticalDistance; // ivar: _autoLineBreakMinVerticalDistance
@property (readonly, nonatomic) BOOL autoLineBreakRequireWeakCursor; // ivar: _autoLineBreakRequireWeakCursor
@property (readonly, nonatomic) BOOL isScribbleActive;
@property (readonly, nonatomic) BOOL lineBreakVerticalBarGestureEnabled; // ivar: _lineBreakVerticalBarGestureEnabled
@property (readonly, nonatomic) BOOL lineBreakVerticalBarUpToDelete; // ivar: _lineBreakVerticalBarUpToDelete
@property (readonly, nonatomic) BOOL preventLeftoverCharsInSubwordGestures; // ivar: _preventLeftoverCharsInSubwordGestures
@property (readonly, nonatomic) CGFloat subwordGestureEndingSpeedRange; // ivar: _subwordGestureEndingSpeedRange
@property (readonly, nonatomic) CGFloat subwordGestureSpeedThreshold; // ivar: _subwordGestureSpeedThreshold


+(id)sharedSettings;


@end


#endif