// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRKEYPADINPUTCLUSTERSENDKEYPARAMS_H
#define MTRKEYPADINPUTCLUSTERSENDKEYPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRKeypadInputClusterSendKeyParams : NSObject

@property (retain, nonatomic) NSNumber *keyCode; // ivar: _keyCode
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif