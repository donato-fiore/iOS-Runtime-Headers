// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTAGSESSIONPROCESSORLIST_H
#define HMMTAGSESSIONPROCESSORLIST_H

@class NSString, NSArray;
@protocol HMFActivityAssociating, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMMTagSessionProcessorList : NSObject <HMFActivityAssociating>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *processors; // ivar: _processors
@property (readonly) Class superclass;


-(id)initWithWorkQueue:(id)arg0 ;
-(id)objectForChildActivity;
-(void)addProcessor:(id)arg0 ;
-(void)removeProcessor:(id)arg0 ;


@end


#endif