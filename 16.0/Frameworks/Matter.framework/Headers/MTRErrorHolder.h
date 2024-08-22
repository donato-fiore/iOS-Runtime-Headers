// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRERRORHOLDER_H
#define MTRERRORHOLDER_H


#import <Foundation/Foundation.h>


@interface MTRErrorHolder : NSObject

@property (readonly, nonatomic) ChipError error; // ivar: _error


-(id)initWithError:(struct ChipError )arg0 ;


@end


#endif