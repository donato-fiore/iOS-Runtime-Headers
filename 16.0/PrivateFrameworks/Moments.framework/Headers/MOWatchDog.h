// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOWATCHDOG_H
#define MOWATCHDOG_H

@class NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MOWatchDog : NSObject {
    NSString *_name;
    float _cadenceSeconds;
    int _failureCount;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    id *_handler;
}




-(BOOL)setCadenceSeconds:(float)arg0 ;
-(float)getCadenceSeconds;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 andHandler:(id)arg1 ;
-(void)_cancel;
-(void)_pet;
-(void)cancel;
-(void)dealloc;
-(void)pet;


@end


#endif