// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CKDISPATCHQUEUEBLOCK_H
#define _CKDISPATCHQUEUEBLOCK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _CKDispatchQueueBlock : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic, setter=setFIFO:) NSUInteger fifo; // ivar: _fifo
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSInteger priority; // ivar: _priority


-(NSInteger)compare:(id)arg0 ;
-(id)description;
// -(id)initWithBlock:(id)arg0 key:(unk)arg1 priority:(id)arg2 fifo:(NSInteger)arg3  ;
-(void)cancel;


@end


#endif