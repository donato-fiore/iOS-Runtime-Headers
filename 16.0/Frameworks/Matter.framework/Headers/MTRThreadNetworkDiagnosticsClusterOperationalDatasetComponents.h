// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTHREADNETWORKDIAGNOSTICSCLUSTEROPERATIONALDATASETCOMPONENTS_H
#define MTRTHREADNETWORKDIAGNOSTICSCLUSTEROPERATIONALDATASETCOMPONENTS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject

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


-(id)description;
-(id)init;


@end


#endif