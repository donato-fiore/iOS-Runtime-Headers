// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPNETWORKCOMMISSIONINGCLUSTERCONNECTNETWORKRESPONSEPARAMS_H
#define CHIPNETWORKCOMMISSIONINGCLUSTERCONNECTNETWORKRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPNetworkCommissioningClusterConnectNetworkResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *errorValue; // ivar: _errorValue
@property (retain, nonatomic) NSNumber *networkingStatus; // ivar: _networkingStatus


-(id)init;


@end


#endif