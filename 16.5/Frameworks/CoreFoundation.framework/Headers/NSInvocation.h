// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSINVOCATION_H
#define NSINVOCATION_H


#import <Foundation/Foundation.h>

#import "NSMethodSignature.h"
#import "NSMutableArray.h"

@interface NSInvocation : NSObject {
    *void _frame;
    *void _retdata;
    NSMethodSignature *_signature;
    NSMutableArray *_container;
    *BOOL _replacedByPointerBacking;
    unsigned int _magic;
    unsigned char _retainedArgs;
    unsigned char _stackAllocated;
}


@property (readonly) BOOL argumentsRetained;
@property (readonly, retain) NSMethodSignature *methodSignature;
@property SEL selector;
@property id *target;


+(id)_invocationWithMethodSignature:(id)arg0 frame:(*void)arg1 ;
+(id)invocationWithMethodSignature:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_addAttachedObject:(id)arg0 ;
-(void)dealloc;
-(void)getArgument:(*void)arg0 atIndex:(NSInteger)arg1 ;
-(void)getReturnValue:(*void)arg0 ;
-(void)invoke;
-(void)invokeUsingIMP:(*unk)arg0 ;
-(void)invokeWithTarget:(id)arg0 ;
-(void)retainArguments;
-(void)setArgument:(*void)arg0 atIndex:(NSInteger)arg1 ;
-(void)setReturnValue:(*void)arg0 ;


@end


#endif