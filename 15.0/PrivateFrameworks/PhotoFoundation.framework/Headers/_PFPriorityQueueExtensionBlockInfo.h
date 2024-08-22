// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFPRIORITYQUEUEEXTENSIONBLOCKINFO_H
#define _PFPRIORITYQUEUEEXTENSIONBLOCKINFO_H


#import <Foundation/Foundation.h>


@interface _PFPriorityQueueExtensionBlockInfo : NSObject

@property (readonly) id *block; // ivar: _block
@property (readonly) NSUInteger priority; // ivar: _priority
@property (readonly) unsigned int qos; // ivar: _qos


-(id)initWithPriority:(NSUInteger)arg0 qos:(unsigned int)arg1 block:(id)arg2 ;


@end


#endif