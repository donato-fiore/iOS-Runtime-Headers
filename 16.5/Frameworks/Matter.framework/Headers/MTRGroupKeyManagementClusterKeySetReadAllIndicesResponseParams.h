// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADALLINDICESRESPONSEPARAMS_H
#define MTRGROUPKEYMANAGEMENTCLUSTERKEYSETREADALLINDICESRESPONSEPARAMS_H

@class NSArray, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGroupKeyManagementClusterKeySetReadAllIndicesResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *groupKeySetIDs; // ivar: _groupKeySetIDs
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif