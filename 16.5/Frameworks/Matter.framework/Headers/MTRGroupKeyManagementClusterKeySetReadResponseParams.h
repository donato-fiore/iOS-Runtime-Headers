// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADRESPONSEPARAMS_H
#define MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADRESPONSEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRGroupKeyManagementClusterGroupKeySetStruct.h"

@interface MTRGroupKeyManagementClusterKeySetReadResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) MTRGroupKeyManagementClusterGroupKeySetStruct *groupKeySet; // ivar: _groupKeySet
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif