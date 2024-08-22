// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGFN_H
#define SGFN_H


#import <Foundation/Foundation.h>


@interface SGFn : NSObject



+(id)filter:(id)arg0 f:(id)arg1 ;
+(id)map:(id)arg0 f:(id)arg1 ;
+(id)mapAndFilter:(id)arg0 f:(id)arg1 ;
+(id)parMapOnQueue:(id)arg0 concurrencyLimit:(NSUInteger)arg1 input:(id)arg2 f:(id)arg3 ;
+(id)simpleDedupe:(id)arg0 ;


@end


#endif