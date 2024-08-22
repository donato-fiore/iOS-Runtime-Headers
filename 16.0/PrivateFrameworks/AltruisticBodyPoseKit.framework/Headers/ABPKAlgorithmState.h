// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKALGORITHMSTATE_H
#define ABPKALGORITHMSTATE_H


#import <Foundation/Foundation.h>


@interface ABPKAlgorithmState : NSObject

@property BOOL detection2d; // ivar: _detection2d
@property BOOL image_preprocessing; // ivar: _image_preprocessing
@property BOOL lifting3d; // ivar: _lifting3d
@property BOOL registration; // ivar: _registration
@property BOOL retargeting; // ivar: _retargeting


-(id)init;
-(id)toDict;


@end


#endif