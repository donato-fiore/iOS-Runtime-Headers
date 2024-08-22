// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBHANDWRITINGINPUTSPEEDMODEL_H
#define UIKBHANDWRITINGINPUTSPEEDMODEL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface UIKBHandwritingInputSpeedModel : NSObject {
    NSMutableArray *_recordedIntervals;
    NSMutableArray *_recordedSpeeds;
    CGFloat _lastStrokeTimeStamp;
    CGFloat _lastTouchTimeStamp;
    CGPoint _lastTouchLocation;
    NSMutableArray *_pointsCurrentStroke;
    BOOL _duringStroke;
}


@property (readonly, nonatomic) BOOL autoConfirmationEnabled; // ivar: _autoConfirmationEnabled
@property (nonatomic) CGRect handwritingFrame; // ivar: _handwritingFrame
@property (readonly, nonatomic) CGFloat maxTimeout; // ivar: _maxTimeout
@property (readonly, nonatomic) CGFloat minTimeout; // ivar: _minTimeout


-(CGFloat)smoothValueFromArray:(id)arg0 ;
-(CGFloat)speedForCurrentStroke;
-(CGFloat)timeoutForNextPage;
-(id)init;
-(void)addPoint:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 ;
-(void)beginStroke;
-(void)endCharacter;
-(void)endStroke;
-(void)updatePreferences;


@end


#endif