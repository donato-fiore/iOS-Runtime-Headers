// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPXNUMBERFILTER_H
#define QLPXNUMBERFILTER_H

@class NSString;
@protocol QLPXMutableNumberFilter;


#import "QLPXObservable.h"

@interface QLPXNumberFilter : QLPXObservable <QLPXMutableNumberFilter>

 {
    ? _needsUpdateFlags;
}


@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat input; // ivar: _input
@property (readonly, nonatomic) CGFloat lastTime; // ivar: _lastTime
@property (nonatomic, setter=_setOutput:) CGFloat output; // ivar: _output
@property (readonly) Class superclass;
@property (nonatomic) CGFloat time; // ivar: _time


-(BOOL)_needsUpdate;
-(CGFloat)initialOutputForInput:(CGFloat)arg0 ;
-(CGFloat)updatedOutput;
-(id)init;
-(id)initWithInput:(CGFloat)arg0 ;
-(id)mutableChangeObject;
-(void)_invalidateOutput;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateOutputIfNeeded;
-(void)didPerformChanges;
-(void)invalidateOutput;
-(void)performChanges:(id)arg0 ;


@end


#endif