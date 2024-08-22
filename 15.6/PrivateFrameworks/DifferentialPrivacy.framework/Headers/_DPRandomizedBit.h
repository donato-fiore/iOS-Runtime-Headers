// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPRANDOMIZEDBIT_H
#define _DPRANDOMIZEDBIT_H


#import <Foundation/Foundation.h>


@interface _DPRandomizedBit : NSObject

@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) NSInteger value; // ivar: _value


+(id)randomizedBit:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)description;
-(id)init;
-(id)initBit:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif