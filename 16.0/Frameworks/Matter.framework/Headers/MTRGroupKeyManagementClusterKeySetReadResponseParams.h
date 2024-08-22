// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADRESPONSEPARAMS_H
#define MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "MTRGroupKeyManagementClusterGroupKeySetStruct.h"

@interface MTRGroupKeyManagementClusterKeySetReadResponseParams : NSObject

@property (retain, nonatomic) MTRGroupKeyManagementClusterGroupKeySetStruct *groupKeySet; // ivar: _groupKeySet
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif