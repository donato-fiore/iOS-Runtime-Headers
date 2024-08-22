// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTACKITERATOR_H
#define SASTACKITERATOR_H

@class NSArray, NSString;
@protocol SAFrameIterator;

#import <Foundation/Foundation.h>


@interface SAStackIterator : NSObject <SAFrameIterator>

 {
    NSArray *_stack;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasKernelStack;
-(BOOL)hasStack;
-(BOOL)hasSwiftAsyncStack;
-(BOOL)hasUserStack;
-(void)iterateFramesWithBacktraceStyle:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif