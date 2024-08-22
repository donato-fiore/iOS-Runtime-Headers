// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCANVASANIMATION_H
#define TSDCANVASANIMATION_H

@class TSUNoCopyDictionary, NSString, NSDate, CAMediaTimingFunction;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>

#import "TSDInteractiveCanvasController.h"

@interface TSDCanvasAnimation : NSObject <CAAnimationDelegate>

 {
    TSUNoCopyDictionary *_animationDictionariesForLayers;
    unsigned int _outstandingAnimationCount;
    BOOL _firstAnimationDidStart;
    BOOL _allAnimationsFinishedBeforeStopping;
}


@property (readonly, retain, nonatomic) NSString *animationID; // ivar: _animationID
@property (readonly, nonatomic) CGFloat beginTime;
@property (readonly, nonatomic) NSString *beginTimeMode;
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) *void context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) SEL didStopSelector; // ivar: _didStopSelector
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (copy, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // ivar: _interactiveCanvasController
@property (nonatomic) BOOL repeatAutoreverses; // ivar: _repeatAutoreverses
@property (nonatomic) float repeatCount; // ivar: _repeatCount
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (nonatomic) BOOL useRepFiltering; // ivar: _useRepFiltering
@property (nonatomic) SEL willStartSelector; // ivar: _willStartSelector


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)initWithAnimationID:(id)arg0 interactiveCanvasController:(id)arg1 context:(*void)arg2 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)setAnimation:(id)arg0 forLayer:(id)arg1 forKey:(id)arg2 ;


@end


#endif