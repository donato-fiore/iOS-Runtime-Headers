// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNDEFAULTQUEUEINGSTRATEGY_H
#define _CNDEFAULTQUEUEINGSTRATEGY_H

@class NSString;
@protocol CNQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _CNDefaultQueueingStrategy : NSObject <CNQueueingStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)enqueueObject:(id)arg0 buffer:(id)arg1 ;


@end


#endif