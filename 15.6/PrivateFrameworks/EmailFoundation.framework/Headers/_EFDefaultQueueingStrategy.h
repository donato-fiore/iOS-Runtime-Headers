// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFDEFAULTQUEUEINGSTRATEGY_H
#define _EFDEFAULTQUEUEINGSTRATEGY_H

@class NSString;
@protocol EFQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _EFDefaultQueueingStrategy : NSObject <EFQueueingStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dequeueObject:(id)arg0 buffer:(id)arg1 ;
-(void)enqueueObject:(id)arg0 replaceIfExists:(BOOL)arg1 buffer:(id)arg2 ;


@end


#endif