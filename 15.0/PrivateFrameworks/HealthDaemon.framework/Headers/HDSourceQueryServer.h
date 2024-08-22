// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSOURCEQUERYSERVER_H
#define HDSOURCEQUERYSERVER_H

@class NSMutableSet, NSString;
@protocol HDDataObserver;


#import "HDQueryServer.h"

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver>

 {
    BOOL _deliversUpdates;
    NSMutableSet *_sources;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)_shouldListenForUpdates;
-(CGFloat)_queue_queryLogThreshold;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif