// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFINVOCATIONTOKEN_H
#define EFINVOCATIONTOKEN_H

@class NSLock, NSMutableArray, NSString;
@protocol EFInvocable;

#import <Foundation/Foundation.h>


@interface EFInvocationToken : NSObject <EFInvocable>

 {
    NSLock *_lock;
    NSMutableArray *_blocks;
    BOOL _isInvoked;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isInvoked) BOOL invoked;
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


+(id)tokenWithInvocationBlock:(id)arg0 ;
+(id)tokenWithLabel:(id)arg0 invocationBlock:(id)arg1 ;
-(id)_nts_consumeBlocks;
-(id)init;
-(id)initWithInvocationBlock:(id)arg0 ;
-(id)initWithLabel:(id)arg0 ;
-(void)addInvocable:(id)arg0 ;
-(void)addInvocationBlock:(id)arg0 ;
-(void)invoke;
-(void)removeAllInvocationBlocks;


@end


#endif