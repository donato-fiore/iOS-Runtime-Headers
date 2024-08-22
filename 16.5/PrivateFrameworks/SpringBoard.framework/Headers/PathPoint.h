// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PATHPOINT_H
#define PATHPOINT_H


#import <Foundation/Foundation.h>


@interface PathPoint : NSObject {
    ? _p;
    ? _n;
}


@property float l; // ivar: _l
@property ? n;
@property ? p;
@property float r; // ivar: _r


-(id)initWithP:(float)arg0 n:(float)arg1 rl;


@end


#endif