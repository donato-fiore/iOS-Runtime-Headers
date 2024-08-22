// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMHOMEDATASYNCOPERATION_H
#define __HMHOMEDATASYNCOPERATION_H

@class HMFOperation;


#import "HMHomeManager.h"

@interface __HMHomeDataSyncOperation : HMFOperation

@property (readonly, weak) HMHomeManager *manager; // ivar: _manager
@property (getter=isRefresh) BOOL refresh; // ivar: _refresh


-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)main;


@end


#endif