// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRPAIR_H
#define MTRPAIR_H


#import <Foundation/Foundation.h>


@interface MTRPair : NSObject

@property (readonly, nonatomic) id *first; // ivar: _first
@property (readonly, nonatomic) id *second; // ivar: _second


+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif