// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFTHREEARGUMENTSAFETYBLOCK_H
#define AFTHREEARGUMENTSAFETYBLOCK_H


#import <Foundation/Foundation.h>


@interface AFThreeArgumentSafetyBlock : NSObject {
    atomic_flag _hasInvoked;
    id *_block;
    id *_defaultValue1;
    id *_defaultValue2;
    id *_defaultValue3;
}




-(BOOL)invokeWithValue:(id)arg0 andValue:(id)arg1 andValue:(id)arg2 ;
-(id)initWithBlock:(id)arg0 ;
// -(id)initWithBlock:(id)arg0 defaultValue1:(unk)arg1 defaultValue2:(id)arg2 defaultValue3:(id)arg3  ;
-(void)dealloc;


@end


#endif