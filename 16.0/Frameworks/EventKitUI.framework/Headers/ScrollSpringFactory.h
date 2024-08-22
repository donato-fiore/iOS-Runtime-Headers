// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROLLSPRINGFACTORY_H
#define SCROLLSPRINGFACTORY_H



#import "SpringFactory.h"

@interface ScrollSpringFactory : SpringFactory

@property (nonatomic) CGFloat initialVelocity; // ivar: _initialVelocity


+(id)sharedFactory;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;


@end


#endif