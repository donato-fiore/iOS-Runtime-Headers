// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NINEARBYPEERCONFIGURATION_H
#define NINEARBYPEERCONFIGURATION_H

@class NSDictionary;


#import "NIConfiguration.h"
#import "NIDiscoveryToken.h"

@interface NINearbyPeerConfiguration : NIConfiguration

@property (nonatomic) NSInteger backgroundMode; // ivar: _backgroundMode
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled; // ivar: _cameraAssistanceEnabled
@property (copy) NSDictionary *debugParameters; // ivar: _debugParameters
@property (nonatomic, getter=isLongRangeEnabled) BOOL longRangeEnabled; // ivar: _longRangeEnabled
@property (copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // ivar: _peerDiscoveryToken


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)_internalIsCameraAssistanceEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeerToken:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif