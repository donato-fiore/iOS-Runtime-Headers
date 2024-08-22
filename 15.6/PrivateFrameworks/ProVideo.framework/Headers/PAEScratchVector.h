// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAESCRATCHVECTOR_H
#define PAESCRATCHVECTOR_H


#import <Foundation/Foundation.h>


@interface PAEScratchVector : NSObject {
    float _x;
    float _y;
    float _endX;
    float _endY;
}




-(id)initWithStartLocationX:(float)arg0 andY:(float)arg1 andEndLocationX:(float)arg2 andY:(float)arg3 ;
-(void)startLocationX:(*float)arg0 andY:(*float)arg1 andEndLocationX:(*float)arg2 andY:(*float)arg3 ;


@end


#endif