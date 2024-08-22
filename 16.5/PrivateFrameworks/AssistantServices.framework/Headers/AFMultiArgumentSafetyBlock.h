// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFMULTIARGUMENTSAFETYBLOCK_H
#define AFMULTIARGUMENTSAFETYBLOCK_H

@class NSMethodSignature, NSArray;

#import <Foundation/Foundation.h>


@interface AFMultiArgumentSafetyBlock : NSObject {
    atomic_flag _hasInvoked;
    id *_block;
    NSMethodSignature *_blockMethodSignature;
    NSArray *_defaultValueArray;
}




-(BOOL)invoke;
-(BOOL)invokeWithValueArray:(id)arg0 ;
-(BOOL)invokeWithValues:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithBlock:(id)arg0 defaultValueArray:(id)arg1 ;
-(id)initWithBlock:(id)arg0 defaultValues:(id)arg1 ;


@end


#endif