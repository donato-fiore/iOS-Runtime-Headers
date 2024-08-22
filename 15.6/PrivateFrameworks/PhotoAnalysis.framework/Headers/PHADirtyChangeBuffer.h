// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHADIRTYCHANGEBUFFER_H
#define PHADIRTYCHANGEBUFFER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PHADirtyChangeBuffer : NSObject

@property (retain, nonatomic) NSMutableDictionary *workInfosByWorkerType; // ivar: _workInfosByWorkerType


-(id)init;
-(id)snapshot;
-(void)recordChangeForAssetIdentifier:(id)arg0 workerType:(int)arg1 workerFlags:(int)arg2 ;


@end


#endif