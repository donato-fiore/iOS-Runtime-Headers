// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFTWOARGUMENTSAFETYBLOCK_H
#define AFTWOARGUMENTSAFETYBLOCK_H


#import <Foundation/Foundation.h>


@interface AFTwoArgumentSafetyBlock : NSObject {
    atomic_flag _hasInvoked;
    id *_block;
    id *_defaultValue1;
    id *_defaultValue2;
}




-(BOOL)invokeWithValue:(id)arg0 andValue:(id)arg1 ;
-(id)initWithBlock:(id)arg0 ;
// -(id)initWithBlock:(id)arg0 defaultValue1:(unk)arg1 defaultValue2:(id)arg2  ;
-(void)dealloc;


@end


#endif