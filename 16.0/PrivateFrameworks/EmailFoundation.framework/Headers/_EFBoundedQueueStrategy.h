// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EFBOUNDEDQUEUESTRATEGY_H
#define _EFBOUNDEDQUEUESTRATEGY_H

@class NSString;
@protocol EFQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _EFBoundedQueueStrategy : NSObject <EFQueueingStrategy>



@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *overflowHandler; // ivar: _overflowHandler
@property (readonly) Class superclass;


-(id)initWithCapacity:(NSUInteger)arg0 overflowHandler:(id)arg1 ;
-(void)dequeueObject:(id)arg0 buffer:(id)arg1 ;
-(void)enqueueObject:(id)arg0 replaceIfExists:(BOOL)arg1 buffer:(id)arg2 ;


@end


#endif