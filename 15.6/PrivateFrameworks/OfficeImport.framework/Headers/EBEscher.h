// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBESCHER_H
#define EBESCHER_H


#import <Foundation/Foundation.h>


@interface EBEscher : NSObject



+(id)readRootObjectWithType:(int)arg0 state:(id)arg1 ;
+(void)readChildrenOfObject:(struct EshObject *)arg0 toArray:(id)arg1 state:(id)arg2 ;


@end


#endif