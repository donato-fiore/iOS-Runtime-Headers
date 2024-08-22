// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFLAZY_H
#define NFLAZY_H


#import <Foundation/Foundation.h>

#import "NFUnfairLock.h"

@interface NFLazy : NSObject

@property (readonly, copy, nonatomic) id *constructor; // ivar: _constructor
@property (readonly, copy, nonatomic) NFUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithConstructor:(id)arg0 ;
-(void)reset;


@end


#endif