// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMODESELECTCLUSTERCHANGETOMODEPARAMS_H
#define MTRMODESELECTCLUSTERCHANGETOMODEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRModeSelectClusterChangeToModeParams : NSObject

@property (retain, nonatomic, getter=getNewMode) NSNumber *newMode; // ivar: _newMode
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif