// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFEARRAYBOUND_H
#define SAFEARRAYBOUND_H


#import <Foundation/Foundation.h>


@interface safeArrayBound : NSObject

@property unsigned int cElements; // ivar: _cElements
@property unsigned int lowBound; // ivar: _lowBound


-(id)initWithElements:(unsigned int)arg0 LowBound:(unsigned int)arg1 ;


@end


#endif