// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMNETWORKCONFIGURATIONWIFIOPTIONS_H
#define HMNETWORKCONFIGURATIONWIFIOPTIONS_H

@class HMFObject;



@interface HMNetworkConfigurationWiFiOptions : HMFObject

@property (readonly, nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (nonatomic) BOOL rotate; // ivar: _rotate


-(id)description;
-(id)initWithCredentialType:(NSInteger)arg0 ;


@end


#endif