// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDTHROTTLEMANAGER_H
#define CKDTHROTTLEMANAGER_H

@class CKThrottleManager;


#import "CKDLogicalDeviceContext.h"

@interface CKDThrottleManager : CKThrottleManager

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext


-(BOOL)addThrottle:(id)arg0 ;
-(id)initWithDeviceContext:(id)arg0 ;
-(id)metadataCache;
-(void)invalidateAdopterThrottles;
-(void)loadThrottlesFromCache;
-(void)noteDataChangeForThrottle:(id)arg0 ;
-(void)throttleWillBeRemoved:(id)arg0 ;


@end


#endif