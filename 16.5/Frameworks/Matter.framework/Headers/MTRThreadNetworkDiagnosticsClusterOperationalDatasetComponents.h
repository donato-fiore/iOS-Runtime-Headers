// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTHREADNETWORKDIAGNOSTICSCLUSTEROPERATIONALDATASETCOMPONENTS_H
#define MTRTHREADNETWORKDIAGNOSTICSCLUSTEROPERATIONALDATASETCOMPONENTS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *activeTimestampPresent; // ivar: _activeTimestampPresent
@property (copy, nonatomic) NSNumber *channelMaskPresent; // ivar: _channelMaskPresent
@property (copy, nonatomic) NSNumber *channelPresent; // ivar: _channelPresent
@property (copy, nonatomic) NSNumber *delayPresent; // ivar: _delayPresent
@property (copy, nonatomic) NSNumber *extendedPanIdPresent; // ivar: _extendedPanIdPresent
@property (copy, nonatomic) NSNumber *masterKeyPresent; // ivar: _masterKeyPresent
@property (copy, nonatomic) NSNumber *meshLocalPrefixPresent; // ivar: _meshLocalPrefixPresent
@property (copy, nonatomic) NSNumber *networkNamePresent; // ivar: _networkNamePresent
@property (copy, nonatomic) NSNumber *panIdPresent; // ivar: _panIdPresent
@property (copy, nonatomic) NSNumber *pendingTimestampPresent; // ivar: _pendingTimestampPresent
@property (copy, nonatomic) NSNumber *pskcPresent; // ivar: _pskcPresent
@property (copy, nonatomic) NSNumber *securityPolicyPresent; // ivar: _securityPolicyPresent


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif