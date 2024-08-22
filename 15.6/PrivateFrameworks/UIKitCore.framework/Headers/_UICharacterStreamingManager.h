// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICHARACTERSTREAMINGMANAGER_H
#define _UICHARACTERSTREAMINGMANAGER_H

@class CADisplayLink, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "UITextView.h"

@interface _UICharacterStreamingManager : NSObject {
    UITextView *_textView;
    CADisplayLink *_streamingAnimationDisplayLink;
    BOOL _streamingAnimationActive;
    CGFloat _lastAnimationUpdateTimeStamp;
    BOOL _committingFinalResults;
}


@property (nonatomic) BOOL discardNextHypothesis; // ivar: _discardNextHypothesis
@property (copy, nonatomic) NSString *lastHypothesis; // ivar: _lastHypothesis
@property (nonatomic) CGFloat minDurationBetweenHypotheses; // ivar: _minDurationBetweenHypotheses
@property (retain, nonatomic) NSMutableArray *pendingEdits; // ivar: _pendingEdits
@property (copy, nonatomic) NSString *previousHypothesis; // ivar: _previousHypothesis
@property (nonatomic) CGFloat streamingCharacterInsertionRate; // ivar: _streamingCharacterInsertionRate
@property (copy, nonatomic) NSString *targetHypothesis; // ivar: _targetHypothesis


-(id)initWithTextView:(id)arg0 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_startStreamingAnimations;
-(void)_stopStreamingAnimation;
-(void)commitFinalResults;
-(void)setWords:(id)arg0 ;
-(void)setupToInsertResultForNewHypothesis:(id)arg0 ;


@end


#endif