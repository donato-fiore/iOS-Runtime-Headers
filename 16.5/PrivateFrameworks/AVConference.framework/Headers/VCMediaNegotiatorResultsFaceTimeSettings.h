// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATORRESULTSFACETIMESETTINGS_H
#define VCMEDIANEGOTIATORRESULTSFACETIMESETTINGS_H


#import <Foundation/Foundation.h>


@interface VCMediaNegotiatorResultsFaceTimeSettings : NSObject {
    unsigned char mediaControlInfoFECFeedbackVersion;
}


@property (nonatomic) BOOL SIPDisabled; // ivar: _SIPDisabled
@property (nonatomic) unsigned int faceTimeSwitches; // ivar: _faceTimeSwitches
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion; // ivar: _mediaControlInfoFECFeedbackVersion
@property (nonatomic) BOOL oneToOneModeSupported; // ivar: _oneToOneModeSupported
@property (nonatomic) BOOL remoteFaceTimeSwitchesAvailable; // ivar: _remoteFaceTimeSwitchesAvailable
@property (nonatomic) unsigned char remoteLinkProbingCapabilityVersion; // ivar: _remoteLinkProbingCapabilityVersion
@property (nonatomic) BOOL secureMessagingRequired; // ivar: _secureMessagingRequired




@end


#endif