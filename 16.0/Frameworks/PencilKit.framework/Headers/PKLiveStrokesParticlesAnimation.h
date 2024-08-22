// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLIVESTROKESPARTICLESANIMATION_H
#define PKLIVESTROKESPARTICLESANIMATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKLiveStrokesParticlesAnimation : NSObject

@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) CGRect destinationFrame; // ivar: _destinationFrame
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSArray *strokes; // ivar: _strokes


-(BOOL)isDoneAtTime:(CGFloat)arg0 ;
-(id)initWithStrokes:(id)arg0 startTime:(CGFloat)arg1 duration:(CGFloat)arg2 destinationFrame:(struct CGRect )arg3 ;
-(void)_calculateBounds;


@end


#endif