// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PABASICASSETIDENTIFIERPOOL_H
#define PABASICASSETIDENTIFIERPOOL_H

@class NSMutableSet, NSString;
@protocol PAAssetIdentifierPooling, PAAggregateVisibilityStateMonitorDelegate, PAAssetIdentifierPoolDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface PABasicAssetIdentifierPool : NSObject <PAAssetIdentifierPooling, PAAggregateVisibilityStateMonitorDelegate>

 {
    id<PAAssetIdentifierPoolDelegate> *_delegate;
    NSUInteger _maxPoolSize;
    CGFloat _autoDrainInterval;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_drainTimer;
    NSUInteger _assetIdentifierPoolSize;
    NSMutableSet *_assetIdentifiers;
    NSUInteger _eventCount;
    BOOL _stateMonitoringEstablished;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger visibilityState; // ivar: _visibilityState


-(id)initWithMaxPoolSize:(NSUInteger)arg0 autoDrainInterval:(CGFloat)arg1 onQueue:(id)arg2 delegate:(id)arg3 ;
-(void)addAssetIdentifiers:(id)arg0 ;
-(void)addAssetIdentifiers:(id)arg0 accessEventCount:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)drainPool;
-(void)invalidate;


@end


#endif