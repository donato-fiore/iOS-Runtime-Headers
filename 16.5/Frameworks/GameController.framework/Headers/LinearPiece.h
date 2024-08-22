// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LINEARPIECE_H
#define LINEARPIECE_H


#import <Foundation/Foundation.h>


@interface LinearPiece : NSObject

@property float delta; // ivar: _delta
@property float value; // ivar: _value


+(id)pieceWithValue:(float)arg0 delta:(float)arg1 ;
-(id)init;


@end


#endif