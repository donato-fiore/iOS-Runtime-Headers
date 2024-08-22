// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERNETWORKCONFIGRESPONSEPARAMS_H
#define MTRNETWORKCOMMISSIONINGCLUSTERNETWORKCONFIGRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterNetworkConfigResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *networkIndex; // ivar: _networkIndex
@property (retain, nonatomic) NSNumber *networkingStatus; // ivar: _networkingStatus
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif