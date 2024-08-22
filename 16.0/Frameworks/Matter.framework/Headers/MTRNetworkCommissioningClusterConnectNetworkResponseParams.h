// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRNETWORKCOMMISSIONINGCLUSTERCONNECTNETWORKRESPONSEPARAMS_H
#define MTRNETWORKCOMMISSIONINGCLUSTERCONNECTNETWORKRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRNetworkCommissioningClusterConnectNetworkResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *errorValue; // ivar: _errorValue
@property (retain, nonatomic) NSNumber *networkingStatus; // ivar: _networkingStatus
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif