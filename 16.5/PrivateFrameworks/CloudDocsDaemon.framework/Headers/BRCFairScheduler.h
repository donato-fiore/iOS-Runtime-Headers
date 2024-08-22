// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFAIRSCHEDULER_H
#define BRCFAIRSCHEDULER_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface BRCFairScheduler : NSObject {
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSString *_name;
    NSUInteger _maxRegistedSourceBit;
    NSUInteger _lastVisitedBit;
    NSMutableDictionary *_sourceForBitIndex;
    BOOL _resumed;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;


-(id)initWithWorkloop:(id)arg0 name:(id)arg1 ;
-(id)sourceForBitIndex:(NSUInteger)arg0 ;
-(void)addSource:(id)arg0 ;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)resume;
-(void)schedule;
-(void)signalSourceForBitIndex:(NSUInteger)arg0 ;
-(void)suspend;
-(void)unregisterSources;


@end


#endif