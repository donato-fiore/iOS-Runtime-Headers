// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASELISTENER_H
#define PHASELISTENER_H



#import "PHASEObject.h"

@interface PHASEListener : PHASEObject {
    ? _velocity;
}


@property (nonatomic) CGFloat dopplerFactor; // ivar: _dopplerFactor
@property (nonatomic) CGFloat gain; // ivar: _gain
@property ? velocity;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEngine:(id)arg0 ;


@end


#endif