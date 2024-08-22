// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFANALYTICSACTIVITYTRACKER_H
#define SFANALYTICSACTIVITYTRACKER_H

@class NSString, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFAnalyticsActivityTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    Class _clientClass;
    NSUInteger _start;
    BOOL _canceled;
}


@property (retain) NSNumber *measurement; // ivar: _measurement


-(id)initWithName:(id)arg0 clientClass:(Class)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)performAction:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)stopWithEvent:(id)arg0 result:(id)arg1 ;


@end


#endif