// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAASSETIDENTIFIERPOOL_H
#define PAASSETIDENTIFIERPOOL_H

@class NSString;
@protocol PAAssetIdentifierPooling, PAProcessStateMonitoringEnding;

#import <Foundation/Foundation.h>

#import "PABasicAssetIdentifierPool.h"

@interface PAAssetIdentifierPool : NSObject <PAAssetIdentifierPooling>

 {
    PABasicAssetIdentifierPool *_assetIdentifierPool;
    id<PAProcessStateMonitoringEnding> *_stateMonitorHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMaxPoolSize:(NSUInteger)arg0 autoDrainInterval:(CGFloat)arg1 bundleRecord:(id)arg2 aggregateVisibilityStateMonitor:(id)arg3 onQueue:(id)arg4 delegate:(id)arg5 ;
-(void)addAssetIdentifiers:(id)arg0 ;
-(void)addAssetIdentifiers:(id)arg0 accessEventCount:(NSUInteger)arg1 ;
-(void)drainPool;
-(void)invalidate;


@end


#endif