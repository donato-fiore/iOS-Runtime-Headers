// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDDISPATCHQUEUE_H
#define ASDDISPATCHQUEUE_H

@class NSString;
@protocol ASDTaskScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASDDispatchQueue : NSObject <ASDTaskScheduler>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultQueue;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)assertQueue;
-(void)asyncUsingBlock:(id)arg0 ;
-(void)scheduleBlock:(id)arg0 ;
-(void)syncUsingBlock:(id)arg0 ;


@end


#endif