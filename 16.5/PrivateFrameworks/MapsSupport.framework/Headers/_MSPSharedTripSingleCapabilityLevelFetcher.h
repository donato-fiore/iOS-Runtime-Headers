// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSPSHAREDTRIPSINGLECAPABILITYLEVELFETCHER_H
#define _MSPSHAREDTRIPSINGLECAPABILITYLEVELFETCHER_H

@class NSTimer, NSString;
@protocol MSPSharedTripCapabilityLevelFetcherObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSPSharedTripContact.h"
#import "_MSPSharedTripSingleCapabilityLevelFetcher.h"

@interface _MSPSharedTripSingleCapabilityLevelFetcher : NSObject <MSPSharedTripCapabilityLevelFetcherObserver>

 {
    MSPSharedTripContact *_contact;
    id *_completion;
    _MSPSharedTripSingleCapabilityLevelFetcher *_keepAliveReference;
    CGFloat _timeoutInterval;
    NSTimer *_timeoutTimer;
    NSUInteger _type;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContact:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_finish;
-(void)_timeout;
-(void)capabilityLevelsDidUpdate;
-(void)start;


@end


#endif