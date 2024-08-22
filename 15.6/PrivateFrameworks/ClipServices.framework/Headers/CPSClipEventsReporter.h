// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSCLIPEVENTSREPORTER_H
#define CPSCLIPEVENTSREPORTER_H

@class BMSource;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPSClipEventsReporter : NSObject {
    BMSource *_source;
    NSObject<OS_dispatch_queue> *_logQueue;
}




+(id)reporter;
-(id)init;
-(void)logClipLaunchEventForSession:(id)arg0 ;


@end


#endif