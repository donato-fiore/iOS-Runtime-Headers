// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDISPLAYLINKAPPLIER_H
#define HUDISPLAYLINKAPPLIER_H

@class CADisplayLink;


#import "HUApplier.h"

@interface HUDisplayLinkApplier : HUApplier

@property (nonatomic) BOOL applyOnlyOnProgressChanges; // ivar: _applyOnlyOnProgressChanges
@property (nonatomic, getter=isAtRest) BOOL atRest; // ivar: _atRest
@property (nonatomic) BOOL completesWhenAtRest; // ivar: _completesWhenAtRest
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (copy, nonatomic) id *progressInputBlock; // ivar: _progressInputBlock
@property (nonatomic) NSUInteger restingFrameCount; // ivar: _restingFrameCount


-(BOOL)complete:(BOOL)arg0 ;
-(BOOL)start;
-(CGFloat)effectiveInputProgressForBlock:(id)arg0 ;
-(id)init;
-(id)initWithProgressInputBlock:(id)arg0 ;
-(void)_invalidateDisplayLinkIfNecessary;
-(void)_updateProgressForInitialUpdate:(BOOL)arg0 ;
-(void)restingStateDidChange;


@end


#endif