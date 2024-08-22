// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTHREADNETWORKDIAGNOSTICSCLUSTEROPERATIONALDATASETCOMPONENTS_H
#define CHIPTHREADNETWORKDIAGNOSTICSCLUSTEROPERATIONALDATASETCOMPONENTS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject

@property (retain, nonatomic) NSNumber *activeTimestampPresent; // ivar: _activeTimestampPresent
@property (retain, nonatomic) NSNumber *channelMaskPresent; // ivar: _channelMaskPresent
@property (retain, nonatomic) NSNumber *channelPresent; // ivar: _channelPresent
@property (retain, nonatomic) NSNumber *delayPresent; // ivar: _delayPresent
@property (retain, nonatomic) NSNumber *extendedPanIdPresent; // ivar: _extendedPanIdPresent
@property (retain, nonatomic) NSNumber *masterKeyPresent; // ivar: _masterKeyPresent
@property (retain, nonatomic) NSNumber *meshLocalPrefixPresent; // ivar: _meshLocalPrefixPresent
@property (retain, nonatomic) NSNumber *networkNamePresent; // ivar: _networkNamePresent
@property (retain, nonatomic) NSNumber *panIdPresent; // ivar: _panIdPresent
@property (retain, nonatomic) NSNumber *pendingTimestampPresent; // ivar: _pendingTimestampPresent
@property (retain, nonatomic) NSNumber *pskcPresent; // ivar: _pskcPresent
@property (retain, nonatomic) NSNumber *securityPolicyPresent; // ivar: _securityPolicyPresent


-(id)init;


@end


#endif