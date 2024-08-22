// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADALLINDICESPARAMS_H
#define MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADALLINDICESPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRGroupKeyManagementClusterKeySetReadAllIndicesParams : NSObject

@property (retain, nonatomic) NSArray *groupKeySetIDs; // ivar: _groupKeySetIDs
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif