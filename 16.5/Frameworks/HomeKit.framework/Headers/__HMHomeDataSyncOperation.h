// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __HMHOMEDATASYNCOPERATION_H
#define __HMHOMEDATASYNCOPERATION_H

@class HMFOperation, NSString;
@protocol HMFLogging;


#import "HMHomeManager.h"

@interface __HMHomeDataSyncOperation : HMFOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMHomeManager *manager; // ivar: _manager
@property (getter=isRefresh) BOOL refresh; // ivar: _refresh
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)main;


@end


#endif