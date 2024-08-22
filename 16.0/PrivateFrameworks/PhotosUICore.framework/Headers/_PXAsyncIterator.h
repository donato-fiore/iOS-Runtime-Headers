// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXASYNCITERATOR_H
#define _PXASYNCITERATOR_H

@class NSString;
@protocol PXAsyncIterator;

#import <Foundation/Foundation.h>


@interface _PXAsyncIterator : NSObject <PXAsyncIterator>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) BOOL hasStopped; // ivar: _hasStopped
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCount:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)_executeNextRun;
-(void)next;
-(void)stop;


@end


#endif