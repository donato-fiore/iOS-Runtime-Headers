// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHIDPATH_H
#define _UIHIDPATH_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface _UIHIDPath : NSObject

@property (nonatomic) NSInteger deliveryPhase; // ivar: _deliveryPhase
@property (readonly, nonatomic) CGFloat density; // ivar: _density
@property (readonly, nonatomic) CGFloat force; // ivar: _force
@property (readonly, nonatomic) NSInteger generationCount; // ivar: _generationCount
@property (readonly, nonatomic) unsigned int identity; // ivar: _identity
@property (readonly, nonatomic) CGFloat irregularity; // ivar: _irregularity
@property (readonly, nonatomic) CGFloat majorRadius; // ivar: _majorRadius
@property (readonly, nonatomic) CGFloat minorRadius; // ivar: _minorRadius
@property (retain, nonatomic) NSNumber *overridePathId; // ivar: _overridePathId
@property (readonly, nonatomic) NSNumber *pathId; // ivar: _pathId
@property (nonatomic) CGPoint position; // ivar: _position
@property (readonly, nonatomic) CGFloat quality; // ivar: _quality
@property (readonly, nonatomic, getter=isTouching) BOOL touching; // ivar: _touching
@property (readonly, nonatomic) CGFloat twist; // ivar: _twist


-(id)init;
-(void)applyTransform:(struct CGAffineTransform )arg0 ;
-(void)updateWithHIDEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif