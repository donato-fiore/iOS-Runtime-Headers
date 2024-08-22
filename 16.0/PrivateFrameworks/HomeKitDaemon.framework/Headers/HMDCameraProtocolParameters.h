// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERAPROTOCOLPARAMETERS_H
#define HMDCAMERAPROTOCOLPARAMETERS_H

@class HMFObject;
@protocol NSSecureCoding;


#import "HMDReselectedStreamConfigurationWrite.h"
#import "HMDSelectedStreamConfigurationWrite.h"
#import "HMDSetupEndPointRead.h"
#import "HMDSetupEndPointWrite.h"
#import "HMDSupportedAudioStreamConfiguration.h"
#import "HMDSupportedRTPConfiguration.h"
#import "HMDSupportedVideoStreamConfiguration.h"

@interface HMDCameraProtocolParameters : HMFObject <NSSecureCoding>



@property (retain, nonatomic) HMDReselectedStreamConfigurationWrite *reselectedStreamConfigurationWrite; // ivar: _reselectedStreamConfigurationWrite
@property (retain, nonatomic) HMDSelectedStreamConfigurationWrite *selectedStreamConfigurationWrite; // ivar: _selectedStreamConfigurationWrite
@property (retain, nonatomic) HMDSetupEndPointRead *setupEndPointRead; // ivar: _setupEndPointRead
@property (retain, nonatomic) HMDSetupEndPointWrite *setupEndPointWrite; // ivar: _setupEndPointWrite
@property (retain, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // ivar: _supportedAudioStreamConfiguration
@property (retain, nonatomic) HMDSupportedRTPConfiguration *supportedRTPConfiguration; // ivar: _supportedRTPConfiguration
@property (retain, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // ivar: _supportedVideoStreamConfiguration


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif