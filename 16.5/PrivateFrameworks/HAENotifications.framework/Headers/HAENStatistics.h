// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENSTATISTICS_H
#define HAENSTATISTICS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HAENStatistics : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
}




+(id)sharedInstance;
-(id)init;
-(id)volumeActionString:(unsigned int)arg0 ;
-(void)_sendMessage:(id)arg0 ;
-(void)processMessage:(id)arg0 ;
-(void)processStatsForEvent:(id)arg0 ;
-(void)processStatsForLocationGating:(struct ? )arg0 ;


@end


#endif