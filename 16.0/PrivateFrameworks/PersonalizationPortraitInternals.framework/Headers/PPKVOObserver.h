// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPKVOOBSERVER_H
#define PPKVOOBSERVER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPKVOObserver : NSObject {
    NSString *_name;
    NSString *_key;
    id *_observee;
    id *_handler;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)observerWithName:(id)arg0 object:(id)arg1 key:(id)arg2 handler:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif