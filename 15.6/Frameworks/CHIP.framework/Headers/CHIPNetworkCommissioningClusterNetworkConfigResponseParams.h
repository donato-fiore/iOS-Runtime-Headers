// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPNETWORKCOMMISSIONINGCLUSTERNETWORKCONFIGRESPONSEPARAMS_H
#define CHIPNETWORKCOMMISSIONINGCLUSTERNETWORKCONFIGRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPNetworkCommissioningClusterNetworkConfigResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *networkIndex; // ivar: _networkIndex
@property (retain, nonatomic) NSNumber *networkingStatus; // ivar: _networkingStatus


-(id)init;


@end


#endif