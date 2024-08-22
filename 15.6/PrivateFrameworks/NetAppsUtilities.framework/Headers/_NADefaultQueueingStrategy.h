// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NADEFAULTQUEUEINGSTRATEGY_H
#define _NADEFAULTQUEUEINGSTRATEGY_H

@class NSString;
@protocol NAQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _NADefaultQueueingStrategy : NSObject <NAQueueingStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)enqueueObject:(id)arg0 buffer:(id)arg1 ;


@end


#endif