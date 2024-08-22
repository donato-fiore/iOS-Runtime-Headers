// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFONEARGUMENTSAFETYBLOCK_H
#define AFONEARGUMENTSAFETYBLOCK_H


#import <Foundation/Foundation.h>


@interface AFOneArgumentSafetyBlock : NSObject {
    atomic_flag _hasInvoked;
    id *_block;
    id *_defaultValue;
}




-(BOOL)invokeWithValue:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
// -(id)initWithBlock:(id)arg0 defaultValue:(unk)arg1  ;
-(void)dealloc;


@end


#endif