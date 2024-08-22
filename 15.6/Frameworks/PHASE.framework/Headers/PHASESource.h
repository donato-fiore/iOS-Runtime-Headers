// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASESOURCE_H
#define PHASESOURCE_H

@class NSArray;


#import "PHASEObject.h"

@interface PHASESource : PHASEObject {
    CGFloat _spatialResolution;
    ? _velocity;
}


@property (nonatomic) CGFloat dopplerFactor; // ivar: _dopplerFactor
@property (nonatomic) CGFloat gain; // ivar: _gain
@property (readonly, copy, nonatomic) NSArray *shapes; // ivar: _shapes
@property (nonatomic) CGFloat spatialResolution;
@property ? velocity;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEngine:(id)arg0 ;
-(id)initWithEngine:(id)arg0 shapes:(id)arg1 ;


@end


#endif