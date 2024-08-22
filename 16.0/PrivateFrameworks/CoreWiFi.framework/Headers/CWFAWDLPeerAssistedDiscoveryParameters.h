// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFAWDLPEERASSISTEDDISCOVERYPARAMETERS_H
#define CWFAWDLPEERASSISTEDDISCOVERYPARAMETERS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFAWDLPeerAssistedDiscoveryParameters : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL followMode; // ivar: _followMode
@property (nonatomic) NSUInteger followModePreferredBand; // ivar: _followModePreferredBand
@property (nonatomic) NSUInteger localAssistedDiscoveryMetric; // ivar: _localAssistedDiscoveryMetric
@property (nonatomic) NSUInteger localMasterChannel; // ivar: _localMasterChannel
@property (nonatomic) NSUInteger localPreferredChannel; // ivar: _localPreferredChannel
@property (nonatomic) NSUInteger localSecondaryPreferredChannel; // ivar: _localSecondaryPreferredChannel
@property (nonatomic) NSUInteger peerAssistedDiscoveryMetric; // ivar: _peerAssistedDiscoveryMetric
@property (copy, nonatomic) NSString *peerMACAddress; // ivar: _peerMACAddress
@property (nonatomic) NSUInteger peerMasterChannel; // ivar: _peerMasterChannel
@property (nonatomic) NSUInteger peerPreferredChannel; // ivar: _peerPreferredChannel
@property (nonatomic) NSUInteger peerSecondaryPreferredChannel; // ivar: _peerSecondaryPreferredChannel
@property (nonatomic) int peerSupportedChannelFlags; // ivar: _peerSupportedChannelFlags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAWDLParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif